#!/bin/bash

RMDIR /Q /S conan
conan install . --output-folder=./conan --build=missing
cd conan
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
cmake --build . --config Release