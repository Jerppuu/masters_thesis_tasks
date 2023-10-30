RMDIR /Q /S conan

conan install . --output-folder=./conan --build=missing
cd conan
cmake .. -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
cmake --build . --config Release