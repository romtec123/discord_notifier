cmake_minimum_required(VERSION 3.24)
project(discord_notify)

set(CMAKE_CXX_STANDARD 17)

add_executable(hooknotify main.cpp hookManager.cpp hookManager.h)
