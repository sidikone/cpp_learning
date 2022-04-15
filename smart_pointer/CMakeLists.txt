#########################################################
### Author : Aboubakar KONE                           ###
### Creation date : 2021-04-25                        ###
### Last update : 2021-04-27                          ###
#########################################################

# -------------------------------------------------------
# Basic setup

cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set (PJName variables)
set (APPName VarApps)
project(${PJName})

# -------------------------------------------------------
# src file

file (GLOB SRCS src/*.cpp)

# -------------------------------------------------------
# Include directories

set (INCLUDE include)
include_directories(
    ${INCLUDE}      
)

# --------------------------------------------------------
# Executable

add_executable(${APPName} ${SRCS})

# --------------------------------------------------------
# Library

add_library(${PJName} SHARED ${SRCS})

# --------------------------------------------------------
# Target link

target_link_libraries(${APPName} ${PJName})