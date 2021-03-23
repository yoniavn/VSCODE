cmake_minimum_required(VERSION 3.8)
project(TCPclient)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp
        Client.cpp
        Client.h)
add_executable(TCPclient ${SOURCE_FILES})