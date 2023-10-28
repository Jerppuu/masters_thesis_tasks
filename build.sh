#!/bin/bash

rm -rf conan
conan install . --output-folder=./conan --build=missing
cd conan
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .