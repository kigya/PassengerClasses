//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include "Aeroflot.h"
#include "ExceptionWeekday.h"
#include <utility>
#include <iostream>

Aeroflot::Aeroflot() = default;

const string &Aeroflot::getDestination() const {
    return destination;
}

int Aeroflot::getFlightNumber() const {
    return flightNumber;
}

const string &Aeroflot::getPlaneType() const {
    return planeType;
}

const Time &Aeroflot::getDepartureTime() const {
    return departureTime;
}

const string &Aeroflot::getWeekday() const {
    return weekday;
}

void Aeroflot::setDestination(const string &destination) {
    Aeroflot::destination = destination;
}

void Aeroflot::setFlightNumber(int flightNumber) {
    Aeroflot::flightNumber = flightNumber;
}

void Aeroflot::setPlaneType(const string &planeType) {
    Aeroflot::planeType = planeType;
}

void Aeroflot::setDepartureTime(const Time &departureTime) {
    Aeroflot::departureTime = departureTime;
}


Aeroflot::~Aeroflot() = default;

string Aeroflot::toString() const {
    if (weekday.empty()) {
        try {
            throw ExceptionWeekday("Weekday is not specified!");
        } catch (const ExceptionWeekday &error) {
            std::cerr << error.what() << '\n';
        }
    } else {
        std::string str;
        str = "\nDestination: " + destination +
              "\nFlight number: " + std::to_string(flightNumber) +
              "\nPlane type: " + planeType +
              "\nDeparture time: " + departureTime.toString() +
              "\nWeekday: " + weekday + "\n";
        return str;
    }
}

Aeroflot::Aeroflot(string destination, int flightNumber, string planeType, const Time &departureTime,
                   const string &weekday) : destination(std::move(destination)),
                                            planeType(std::move(planeType)),
                                            departureTime(departureTime) {
    flightNumber > 0 ? this->flightNumber = flightNumber : this->flightNumber = 0;
    if (weekday == "Monday" || weekday == "Tuesday" || weekday == "Wednesday" || weekday == "Thursday" ||
        weekday == "Friday" || weekday == "Saturday" || weekday == "Sunday") {
        this->weekday = weekday;
    } else {
        this->weekday = "NaN";
    }
}

Aeroflot::Aeroflot(string destination, int flightNumber, string planeType, const Time &departureTime) :
        destination(std::move(destination)),
        planeType(std::move(planeType)),
        departureTime(departureTime) {
    flightNumber > 0 ? this->flightNumber = flightNumber : this->flightNumber = 0;
}

