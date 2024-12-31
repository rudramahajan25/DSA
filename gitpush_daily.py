import os
import subprocess
import datetime

# Directory where the files are stored
directory = r"C:\Users\rudra\Downloads\f54b3997-4268-4654-ac77-1a03ec91635c_Export-cc977a27-b371-48d2-acc6-5b4e0ccd48b5\output_files"

# The file that keeps track of already pushed files
pushed_files_file = "pushed_files.txt"

# Get the list of all files in the directory
files = os.listdir(directory)

# Read the list of pushed files
if os.path.exists(pushed_files_file):
    with open(pushed_files_file, "r") as file:
        pushed_files = file.read().splitlines()
else:
    pushed_files = []

# Filter files that have not been pushed yet
untracked_files = [file for file in files if file not in pushed_files]

# If there are untracked files, push the first one
if untracked_files:
    file_to_push = untracked_files[0]
    
    # Change directory to the output_files folder
    os.chdir(directory)

    # Add the file to staging
    subprocess.run(["git", "add", file_to_push])

    # Commit the file
    commit_message = f"Commit for {file_to_push} on {datetime.date.today()}"
    subprocess.run(["git", "commit", "-m", commit_message])

    # Stage the pushed_files.txt file
    subprocess.run(["git", "add", pushed_files_file])

    # Push the file to the repository
    subprocess.run(["git", "push", "--set-upstream", "origin", "main"])

    # Mark the file as pushed
    with open(pushed_files_file, "a") as file:
        file.write(f"{file_to_push}\n")

    # Commit the updated pushed_files.txt
    subprocess.run(["git", "commit", "-m", "Update pushed_files.txt"])

    # Push the commit of updated pushed_files.txt
    subprocess.run(["git", "push"])

    print(f"Successfully pushed {file_to_push}")
else:
    print("No new files to push today.")
