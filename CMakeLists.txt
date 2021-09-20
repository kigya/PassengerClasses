cmake_minimum_required(VERSION 3.20)
project(AeroflotClasses)

set(CMAKE_CXX_STANDARD 20)

add_executable(AeroflotClasses AeroflotClasses/main.cpp AeroflotClasses/time/Time.cpp AeroflotClasses/time/Time.h AeroflotClasses/aeroflot/Aeroflot.cpp AeroflotClasses/aeroflot/Aeroflot.h AeroflotClasses/aeroflot/AeroflotTerminal.cpp AeroflotClasses/aeroflot/AeroflotTerminal.h AeroflotClasses/exception/ExceptionWeekday.cpp AeroflotClasses/exception/ExceptionWeekday.h AeroflotClasses/handler/AeroflotHandlerOutput.cpp AeroflotClasses/handler/AeroflotHandlerOutput.h)
