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
2. ## Set Up Directory and Run:

  Navigate to the `CS201-VCS-Project` folder.  
  Compile and run `main.cpp` to launch the VCS.
  
  ```shell
  g++ main.cpp -o vcs -lstdc++fs
  ./vcs
3. ## Specify a Working Directory:

  Upon running, you will be asked to specify a working directory and username for commits.  
  Ensure the working directory is outside the `CS201-VCS-Project` folder.



