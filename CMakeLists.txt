cmake_minimum_required(VERSION 3.20)
project(PassengerClasses)

set(CMAKE_CXX_STANDARD 23)

add_executable(PassengerClasses PassengerClasses/main.cpp PassengerClasses/time/Time.cpp PassengerClasses/time/Time.h PassengerClasses/passenger/Passenger.cpp PassengerClasses/passenger/Passenger.h PassengerClasses/exception/ExceptionWeekday.cpp PassengerClasses/exception/ExceptionWeekday.h PassengerClasses/handler/PassengerHandlerOutput.cpp PassengerClasses/handler/PassengerHandlerOutput.h PassengerClasses/validator/MovementCostValidator.cpp PassengerClasses/validator/MovementCostValidator.h PassengerClasses/validator/WeekdayValidator.cpp PassengerClasses/validator/WeekdayValidator.h PassengerClasses/validator/TimeValidator.cpp PassengerClasses/validator/TimeValidator.h PassengerClasses/passenger/Plane.cpp PassengerClasses/passenger/Plane.h PassengerClasses/passenger/Train.cpp PassengerClasses/passenger/Train.h PassengerClasses/passenger/Car.cpp PassengerClasses/passenger/Car.h)
