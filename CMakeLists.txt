cmake_minimum_required(VERSION 3.10)

project(jsonCp)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp lib/important.cpp lib/writeSys.cpp lib/EFI.cpp)
