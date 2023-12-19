# Master's thesis tasks
Tasks and material for Master's thesis: Benefits of containerized development environments

## Requirements
 - Python https://www.python.org/downloads/
 - CMake (>=3.22) https://cmake.org/download/
 - Conan https://conan.io/downloads
 - G++ compiler

### G++ compiler

 How to check if you have a compiler installed

- https://code.visualstudio.com/docs/languages/cpp#_check-if-you-have-a-compiler-installed

How to Install a compiler

- https://code.visualstudio.com/docs/languages/cpp#_install-a-compiler
 
Windows users need to use MinGW compiler, since Windows build script is made for it.

## Build and executing

### Run these commands in root of this  project folder.

Before using Conan first time, profile of the development environment needs to be created.

This can be done with command:  `conan profile detect`

#### Windows
 - Build: `.\build.bat`
 - Execute: `.\conan\Master_thesis_tasks.exe`

#### MacOS and Linux
 - Build: `./build.sh`
 - Execute: `./conan/Master_thesis_tasks`