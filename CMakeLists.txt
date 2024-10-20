##Especificar la minima version requerida de Cmake
cmake_minimum_required(VERSION 3.28.2)

message("-----------------------------")
message("     Inicio de la build      ")
message("-----------------------------")

##Darle un nombre al projecto e identificar que lenguaje se utilizará
project(My_Rpg DESCRIPTION "Un simple rpg por consola" LANGUAGES CXX)

##VARIABLES
set(SRC_DIR ${PROJECT_SOURCE_DIR}/src)

##Archivos necesarios para el ejecutable
add_executable(${PROJECT_NAME} 
                ${SRC_DIR}/main.cpp
                ${SRC_DIR}/functions.cpp)

##Ruta de los headers files
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/inc)

message("-----------------------------")
message("      Fin de la build       ")
message("-----------------------------")