cmake_minimum_required(VERSION 3.25)
project(dyn_ims)

set(CMAKE_CXX_STANDARD 23)

add_executable(dyn_ims main.cpp AuthSys.cpp AuthSys.h dbHandler.cpp dbHandler.h)
