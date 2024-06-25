cmake_minimum_required(VERSION 3.28)
project(cpplearn)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpplearn main.cpp
        multitable/multtable.cpp
        multitable/multtable.h
        mypet/pet.cpp
        mypet/pet.h
)
