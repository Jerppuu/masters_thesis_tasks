cmake_minimum_required(VERSION 3.27)
project(Master_thesis_tasks)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
find_package(nlohmann_json REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)