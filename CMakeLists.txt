cmake_minimum_required(VERSION 3.28)
project(RubiksCubeClion)

set(CMAKE_CXX_STANDARD 17)

add_executable(RubiksCubeClion main.cpp
        Model/GenericRubiksCube.cpp
        Model/GenericRubiksCube.h
        Model/RubiksCube3dArray.cpp
        Model/RubiksCube1dArray.cpp
        Model/RubiksCubeBitboard.cpp
        Solver/DFSSolver.h
        Solver/BFSSolver.h
        Solver/IDDFSSolver.h
)
