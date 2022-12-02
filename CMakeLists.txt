cmake_minimum_required(VERSION 3.23)
project(CourseProject_Starting_Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CourseProject_Starting_Code
        CSCRacing.cpp
        Racetrack.cpp
        Racetrack.h GamePlay.cpp GamePlay.h cars.cpp cars.h)
