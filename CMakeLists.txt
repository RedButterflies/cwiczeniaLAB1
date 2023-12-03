cmake_minimum_required(VERSION 3.23)
project(cwiczenia)

set(CMAKE_CXX_STANDARD 17)

add_executable(cwiczenia main.cpp Person.cpp Person.h Student.cpp Student.h Animal.cpp Animal.h Dog.cpp Dog.h Cat.cpp Cat.h)
