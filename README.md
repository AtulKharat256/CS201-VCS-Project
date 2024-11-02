# **Simple Version Control System**

This project is a lightweight, custom-built Version Control System (VCS) inspired by Git, enabling efficient management of code repositories, collaborative development, and streamlined version control operations.

## 🚀 **Core Features**

- **Repository Initialization:** Start a fresh repository to track your code versions from scratch.
- **Branch Management:**
  - **Create:** Set up new branches to experiment with features or work on bug fixes independently.
  - **Switch (Checkout):** Seamlessly navigate between branches to focus on specific parts of your project.
  - **Delete:** Remove branches that are no longer relevant or needed.
- **Merging Options:**
  - **Fast-Forward Merge:** Integrate branch changes quickly if no diverging changes exist.
  - **Three-Way Merge:** Resolve and merge conflicts when branches diverge, ensuring consistency.
- **Stashing Support:** Temporarily save uncommitted changes to clear your workspace, with the option to restore them later.
- **Staging Area:** Organize and review changes in a staging area before committing them to the repository.

## 📚 **Getting Started**

1. **Clone the Repository**: Start by cloning this repository to your local environment.
   ```shell
   gh repo clone AtulKharat256/CS201-VCS-Project
2. Unzip the files and navigate to the src folder.
   Run first.cpp to launch the VCS.
   If prompted with errors about the filesystem library, update your compiler (e.g., with MYSYS2) or add filesystem support manually in C++.
   Specify a working directory (anywhere outside src), and provide your username for commits.
3. Initialize a Repository:
   Run the init command to create a new repository
   atom-init
4. Stage Files: Add files to the staging area with relative paths only.
   atom-add example.txt
5. Commit Changes: Commit staged files to the repository with a descriptive message.
   atom-commit

⚠️ Important Notes
Internal Folder: On initialization, a .git folder is created in the working directory to store VCS internals.
Single-Directory Limitation: A variables directory will link the source code in src to your working directory, making it necessary to create a fresh src copy for each new working directory.
