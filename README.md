# Master's thesis tasks
Tasks and material for Master's thesis: Benefits of containerized development environments

## Requirements
 - Python https://www.python.org/downloads/
 - CMake (>=3.22) https://cmake.org/download/
 - Conan https://conan.io/downloads
 - C++ compiler https://code.visualstudio.com/docs/languages/cpp
 
 (Windows build script is made for MSVC compiler)

## Using Conan

Before using Conan first time, profile of the development environment needs to be created.

This can be done with command:  `conan profile detect`

### Build and executing

#### Windows
 - run: `.\build.bat`
 - execute: `.\conan\Release\Master_thesis_tasks.exe`

#### MacOS and Linux
 - run: `./build.sh`
 - execute: `./conan/Master_thesis_tasks`