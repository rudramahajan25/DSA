import os
import subprocess
from datetime import datetime

# Configure these variables
REPO_PATH = r"C:\Users\rudra\Downloads\f54b3997-4268-4654-ac77-1a03ec91635c_Export-cc977a27-b371-48d2-acc6-5b4e0ccd48b5\output_files"  # Path to your Git repo
FILES_DIR = REPO_PATH  # Folder containing new files
BRANCH_NAME = "main"  # Your branch name
COMMIT_MESSAGE_TEMPLATE = "commit for {}"
COMMIT_FILE_LOG = "commit_file_log.txt"  # Log to track the last committed file

def get_file_to_commit():
    """Select the next file in a round-robin or sequential manner."""
    try:
        # Read the log file to determine the last committed file
        if os.path.exists(COMMIT_FILE_LOG):
            with open(COMMIT_FILE_LOG, 'r') as log_file:
                last_file = log_file.readline().strip()
        else:
            last_file = None

        # Get a list of all files in the directory (excluding directories)
        files = [f for f in os.listdir(FILES_DIR) if os.path.isfile(os.path.join(FILES_DIR, f))]
        if not files:
            print("No files to commit.")
            return None

        # Sort the files (alphabetically or numerically) to have a consistent order
        files.sort()

        # If it's the first commit or after all files have been used, restart
        if last_file is None or last_file == files[-1]:
            selected_file = files[0]
        else:
            # Find the next file after the last committed one
            last_file_index = files.index(last_file)
            selected_file = files[(last_file_index + 1) % len(files)]

        # Update the commit log with the selected file
        with open(COMMIT_FILE_LOG, 'w') as log_file:
            log_file.write(selected_file)

        return selected_file

    except Exception as e:
        print(f"Error while selecting the file: {e}")
        return None

def push_to_git(file_path):
    """Automate git add, commit, and push."""
    try:
        os.chdir(REPO_PATH)  # Navigate to the repo directory
        print(f"Changed directory to {REPO_PATH}")
        
        # Add the file to staging
        subprocess.run(["git", "add", file_path], check=True)  # Add the selected file
        print(f"Added {file_path} to staging area.")
        
        # Ensure the repository is clean (no uncommitted changes)
        status = subprocess.run(["git", "status", "--porcelain"], capture_output=True, text=True)
        if status.stdout.strip():
            print("Uncommitted changes detected. Proceeding with commit.")
        else:
            print("No changes to commit.")
        
        # Commit the file
        commit_message = COMMIT_MESSAGE_TEMPLATE.format(file_path)
        subprocess.run(["git", "commit", "-m", commit_message], check=True)
        
        # Push to the repository
        subprocess.run(["git", "push", "origin", BRANCH_NAME], check=True)
        print(f"Successfully pushed {file_path} to {BRANCH_NAME}.")
    except subprocess.CalledProcessError as e:
        print(f"Error during Git operation: {e}")
    except Exception as e:
        print(f"Unexpected error: {e}")

def main():
    # Get the file to commit
    file_to_commit = get_file_to_commit()
    if file_to_commit:
        file_path = os.path.join(FILES_DIR, file_to_commit)
        print(f"File selected for commit: {file_path}")
        push_to_git(file_path)

if __name__ == "__main__":
    main()
