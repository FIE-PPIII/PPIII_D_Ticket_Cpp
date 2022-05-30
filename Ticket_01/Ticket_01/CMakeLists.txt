cmake_minimum_required(VERSION 3.21)
project(Ticket_01)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ticket_01
        Ticket.cpp
        Ticket.h
        Ticket_01.cpp)
