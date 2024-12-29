import os
import subprocess
from datetime import datetime

# Configure these variables
REPO_PATH = r"C:\Users\rudra\Downloads\f54b3997-4268-4654-ac77-1a03ec91635c_Export-cc977a27-b371-48d2-acc6-5b4e0ccd48b5\output_files"  # Path to your Git repo
FILES_DIR = REPO_PATH  # Folder containing new files
BRANCH_NAME = "main"  # Your branch name
COMMIT_MESSAGE_TEMPLATE = "commit for {}"

def get_today_file(files):
    """Return the file to be pushed for today based on date."""
    today = datetime.now().strftime("%Y-%m-%d")
    for file in files:
        if today in file:  # Match files named with today's date
            return file
    return files[0] if files else None  # Fallback to the first file

def push_to_git(file_path):
    """Automate git add, commit, and push."""
    try:
        os.chdir(REPO_PATH)  # Navigate to the repo directory
        print(f"Changed directory to {REPO_PATH}")
        
        # Ensure the repository is clean (no uncommitted changes)
        status = subprocess.run(["git", "status", "--porcelain"], capture_output=True, text=True)
        if status.stdout.strip():
            print("Uncommitted changes detected. Proceeding with commit.")
        else:
            print("No changes to commit.")

        # Git commands
        subprocess.run(["git", "add", file_path], check=True)
        commit_message = COMMIT_MESSAGE_TEMPLATE.format(file_path)
        subprocess.run(["git", "commit", "-m", commit_message], check=True)
        subprocess.run(["git", "push", "origin", BRANCH_NAME], check=True)
        print(f"Successfully pushed {file_path} to {BRANCH_NAME}.")
    except subprocess.CalledProcessError as e:
        print(f"Error during Git operation: {e}")
    except Exception as e:
        print(f"Unexpected error: {e}")

def main():
    # Get the list of files in the directory
    files = [f for f in os.listdir(FILES_DIR) if os.path.isfile(os.path.join(FILES_DIR, f))]
    if not files:
        print("No files to process.")
        return

    # Get the file for today
    today_file = get_today_file(files)
    if not today_file:
        print("No suitable file found for today.")
        return

    file_path = os.path.join(FILES_DIR, today_file)
    print(f"File selected for commit: {file_path}")
    push_to_git(file_path)

if __name__ == "__main__":
    main()
