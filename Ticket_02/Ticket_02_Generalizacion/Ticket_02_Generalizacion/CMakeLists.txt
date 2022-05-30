cmake_minimum_required(VERSION 3.21)
project(Ticket_02_Generalizacion)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ticket_02_Generalizacion
        Ticket.cpp
        Ticket.h
        Ticket_02_Generalizacion.cpp
        ../../../Lib/Lib_Fecha/Lib_Fecha_Generalizacion/Fecha.h
        ../../../Lib/Lib_Fecha/Lib_Fecha_Generalizacion/Fecha.cpp)
