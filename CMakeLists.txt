cmake_minimum_required(VERSION 3.22)
project(Master_thesis_tasks)

find_package(nlohmann_json REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)