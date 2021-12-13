cmake_minimum_required(VERSION 3.21)
project(tamagochi)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(extern)
add_subdirectory(src)
add_subdirectory(test)

enable_testing()

add_executable(MAIN_EXECUTABLE main.cpp)
target_link_libraries(MAIN_EXECUTABLE tamagochi)