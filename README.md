# Master's thesis tasks
Tasks and material for Master's thesis: Benefits of containerized development environments

## Requirements
- Python https://www.python.org/downloads/
- CMake (>=3.27) https://cmake.org/download/
- Conan https://conan.io/downloads

## Using Conan

Before using Conan first time, profile of the development environment needs to be created.

This can be done with command:  `conan profile detect`

Running Conan is done with command `conan install . --output-folder=./conan --build=missing`