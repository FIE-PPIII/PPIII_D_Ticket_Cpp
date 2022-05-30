cmake_minimum_required(VERSION 3.21)
project(Ticket_04_Poli_Gene)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ticket_04_Poli_Gene
        Ticket.cpp
        Ticket.h
        Ticket_04_Poli_Gene.cpp
        ../../../Lib/Lib_Hora/Lib_Hora_Poli_Gene/Hora.h
        ../../../Lib/Lib_Hora/Lib_Hora_Poli_Gene/Hora.cpp
        ../../../Lib/Lib_Fecha/Lib_Fecha_Polimorfismo/Fecha.h
        ../../../Lib/Lib_Fecha/Lib_Fecha_Polimorfismo/Fecha.cpp)
