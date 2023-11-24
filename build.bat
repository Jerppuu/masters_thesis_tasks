RMDIR /Q /S conan

conan install . --output-folder=./conan --build=missing
cd conan
cmake .. -G "MinGW Makefiles" -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .