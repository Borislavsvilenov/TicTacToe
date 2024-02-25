cmake_minimum_required(VERSION 3.5)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 14)

include_directories(objects)

add_executable(TicTacToe
               objects/Board.cpp
               objects/Board.hpp
               main.cpp)
