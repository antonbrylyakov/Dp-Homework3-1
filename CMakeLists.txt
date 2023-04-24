cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
project(Homework)
add_executable(homework main.cpp "LogCommand.h"   "ConsoleLogCommand.h" "ConsoleLogCommand.cpp" "FileLogCommand.h" "FileLogCommand.cpp")