cmake_minimum_required(VERSION 3.21)
project(Ticket_03_Agregacion)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ticket_03_Agregacion
        Ticket.cpp
        Ticket.h
        Ticket_03_Agregacion.cpp
        ../../../Lib/Lib_Fecha/Lib_Fecha_Agregacion/Fecha.h
        ../../../Lib/Lib_Fecha/Lib_Fecha_Agregacion/Fecha.cpp
        ../../../Lib/Lib_Hora/Lib_Hora_Agregacion/Hora.h
        ../../../Lib/Lib_Hora/Lib_Hora_Agregacion/Hora.cpp)
