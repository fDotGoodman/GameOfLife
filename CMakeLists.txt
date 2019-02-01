cmake_minimum_required(VERSION 3.12)
project(GameOfLife)

set(CMAKE_CXX_STANDARD 14)

add_executable(GameOfLife
        .idea/codeStyles/Project.xml
        .idea/GameOfLife.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/GameOfLife.cbp
        cmake-build-debug/Makefile
        CMakeLists.txt
        main.c)
