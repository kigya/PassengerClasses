cmake_minimum_required(VERSION 3.20)
project(AeroflotClasses)

set(CMAKE_CXX_STANDARD 20)

add_executable(AeroflotClasses AeroflotClasses/main.cpp AeroflotClasses/Time.cpp AeroflotClasses/Time.h AeroflotClasses/Aeroflot.cpp AeroflotClasses/Aeroflot.h AeroflotClasses/AeroflotTerminal.cpp AeroflotClasses/AeroflotTerminal.h AeroflotClasses/ExceptionWeekday.cpp AeroflotClasses/ExceptionWeekday.h)
