//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//
//

#include <iostream>
#include "AeroflotHandlerInput.h"
#include "../validator/FlightNumberValidator.h"
#include "TimeHandlerInput.h"
#include "../validator/WeekdayValidator.h"

Aeroflot AeroflotHandlerInput::iConsoleAeroflot() {
	Aeroflot aeroflot;

	string destination;
    int flightNumber = 0;
    string planeType;
    Time departureTime;
    string weekday;

    std::cout << "Enter destination:" << std::endl;
    std::cin >> destination;

    std::cout << "Enter flight number:" << std::endl;
    std::cin >> flightNumber;

    if(!(FlightNumberValidator::isPositive(flightNumber))) {
        flightNumber = 0;
    }

    std::cout << "Enter plane type:" << std::endl;
    std::cin >> planeType;

    departureTime = TimeHandlerInput::iConsoleTime();

    std::cout << "Enter weekday:" << std::endl;
    std::cin >> weekday;
    if (!(WeekdayValidator::isCorrectWeekday(weekday))) {
        weekday = "NaN";
    }

    aeroflot.setDestination(destination);
    aeroflot.setFlightNumber(flightNumber);
    aeroflot.setPlaneType(planeType);
    aeroflot.setDepartureTime(departureTime);
    aeroflot.setWeekday(weekday);

	return aeroflot;
}