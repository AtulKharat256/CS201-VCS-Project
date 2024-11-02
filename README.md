# **Our own baby Version Control System (ATOM)**

This project is a lightweight, custom-built Version Control System (VCS) inspired by Git, enabling efficient management of code repositories, collaborative development, and streamlined version control operations.

## 🚀 **Core Features**

- **Repository Initialization**: Start a fresh repository to track your code versions from scratch.
- **Branch Management**:
  - **Create**: Set up new branches to experiment with features or work on bug fixes independently.
  - **Switch (Checkout)**: Seamlessly navigate between branches to focus on specific parts of your project.
  - **Delete**: Remove branches that are no longer relevant or needed.
- **Merging Options**:
  - **Fast-Forward Merge**: Integrate branch changes quickly if no diverging changes exist.
  - **Three-Way Merge**: Resolve and merge conflicts when branches diverge, ensuring consistency.
- **Stashing Support**: Temporarily save uncommitted changes to clear your workspace, with the option to restore them later.
- **Staging Area**: Organize and review changes in a staging area before committing them to the repository.

## 📚 **Getting Started**

### Prerequisites
Make sure you have:
- C++ compiler (supporting the `<filesystem>` library).
- `MYSYS2` or similar to handle C++17/20 libraries.

### Installation

1. **Clone the Repository**: 
     Clone this repository to your local environment.
  
     ```shell
     gh repo clone AtulKharat256/CS201-VCS-Project
2. **Set Up Directory and Run**:

    Navigate to the `CS201-VCS-Project` folder.  
    Compile and run `main.cpp` to launch the VCS.
    
    ```shell
    g++ main.cpp -o vcs -lstdc++fs
    ./vcs
3. **Specify a Working Directory**:

    Upon running, you will be asked to specify a working directory and username for commits.
    Ensure the working directory is outside the CS201-VCS-Project folder.
###Example Workflow

1. **Initialize a Repository**:
    Start by running the init command to create a new repository:
    ```shell
    atom-init
2. **Stage files**:
    Add files to the staging area. Use relative paths only.
    ```shell
    atom-add example.txt
3. **Commit Changes**:
    Commit staged files with a descriptive message.
    ```shell
    atom-commit
4. **Branching and Merging**:
    Create, switch, and delete branches, or use merging options as needed.
    ```shell
    atom-branch
    atom-checkout
    atom-merge ffm master
# Command Menu

After launching, the following commands are available:

- **Branch**: `atom-branch <branch_name>` - Create a new branch with the specified name.
- **Checkout**: `atom-checkout <branch_name>` - Switch to the specified branch.
- **Delete Branch**: `atom-delete <branch_name>` - Remove the specified branch.
- **Stage Files**: `atom-stage` - Stage all modified files for commit.
- **Show Branches**: `atom-show` - Display a list of all branches.
- **Menu Help**: `atom-menu` - Show help information for commands.
- **Merge**: `atom-merge <merge-type> <branch_name>` - Merge the specified branch using the chosen merge type.
- **View Merge Types**: `atom-merges` - List available merge types.
- **Stash Changes**: `atom-stash` - Temporarily store changes that are not ready to be committed.
- **Apply Stash**: `atom-restash` - Apply stashed changes back to your working directory.

⚠️ **Important Notes**

- **Internal Folder**: When initializing, a `.git` folder is created in your working directory to store VCS internals.
- **Single-Directory Limitation**: The variables directory links the main project folder (`CS201-VCS-Project`) to your working directory. To start a new working directory, create a fresh copy of `CS201-VCS-Project`.

🔧 **Project Limitations**

- **File Tracking**: This VCS currently tracks only files in the specified working directory and not in subdirectories.
- **Error Handling**: Limited error handling; ensure commands are used correctly as described.

🧩 **Project Structure**

This VCS consists of various C++ modules working together to create a streamlined version control experience. Key modules include:

- **Branching and Merging**: Efficient branch creation, deletion, and merging functionality with options for fast-forward and three-way merges.
- **Staging and Committing**: Manage your code's lifecycle from staging changes to final commits.
- **File Management**: Handles file storage and retrieval within a `.git`-like structure for easy tracking and versioning.

📖 **Resources and Documentation**

This project was inspired by Git's design. Check out these resources for a deeper understanding:

- [Git Basic](https://wyag.thb.lt/#GitRepository)
- [Git Internels](https://www.leshenko.net/p/ugit/)
- [Git Objects and Internels](https://git-scm.com/book/en/v2/Git-Internals-Git-Objects)


    
    
    
    


