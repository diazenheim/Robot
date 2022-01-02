cmake_minimum_required(VERSION 3.10)

project(robot)

add_library(robot maze.h maze.cpp robot.h robot.cpp randomRobot.h randomRobot.cpp)

add_executable(main main.cpp)

target_link_libraries(main robot)