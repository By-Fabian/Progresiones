cmake_minimum_required(VERSION 3.15)
project(Progresiones)

set(CMAKE_CXX_STANDARD 14)

add_executable(Progresiones main.cpp)

add_executable(miscelanius.h claseProgresion.h claseProgresion.cpp claseGeometricProgresion.h claseGeometricProgresion.cpp claseFibonacciProgresion.h claseFibonacciProgresion.cpp claseArimeticProgresion.h claseArimeticProgresion.cpp)