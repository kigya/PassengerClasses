//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include "Aeroflot.h"
#include "../exception/ExceptionWeekday.h"
#include <iostream>
#include <utility>
#include "../validator/FlightNumberValidator.h"
#include "../validator/WeekdayValidator.h"

Aeroflot::Aeroflot(): flightNumber(0), departureTime(Time(0, 0)) {
    this->destination = "not determined";
    this->planeType = "not determined";
    this->weekday = "not determined";
}

Aeroflot::~Aeroflot() = default;

Aeroflot::Aeroflot(string destination, int flightNumber, string planeType, const Time &departureTime,
                   const string &weekday) : destination(std::move(destination)),
                                            planeType(std::move(planeType)),
                                            departureTime(departureTime) {
    FlightNumberValidator::isPositive(flightNumber) ? this->flightNumber = flightNumber : this->flightNumber = 0;
    if (WeekdayValidator::isCorrectWeekday(weekday)) {
        this->weekday = weekday;
    } else {
        this->weekday = "NaN";
    }
}

Aeroflot::Aeroflot(string destination, int flightNumber, string planeType, const Time &departureTime) :
        destination(std::move(destination)),
        planeType(std::move(planeType)),
        departureTime(departureTime) {
    FlightNumberValidator::isPositive(flightNumber) ? this->flightNumber = flightNumber : this->flightNumber = 0;
}

const string &Aeroflot::getDestination() const {
    return destination;
}

// attribute that suppresses warnings on unused entities.
[[maybe_unused]] int Aeroflot::getFlightNumber() const {
    return flightNumber;
}

[[maybe_unused]] const string &Aeroflot::getPlaneType() const {
    return planeType;
}

const Time &Aeroflot::getDepartureTime() const {
    return departureTime;
}

const string &Aeroflot::getWeekday() const {
    return weekday;
}

void Aeroflot::setDestination(string destination) {
    Aeroflot::destination = std::move(destination);
}

void Aeroflot::setFlightNumber(int flightNumber) {
    FlightNumberValidator::isPositive(flightNumber) ? this->flightNumber = flightNumber : this->flightNumber = 0;
}

void Aeroflot::setPlaneType(string planeType) {
    Aeroflot::planeType = std::move(planeType);
}

void Aeroflot::setDepartureTime(Time departureTime) {
    Aeroflot::departureTime = departureTime;
}

void Aeroflot::setWeekday(string weekday) {
    if (WeekdayValidator::isCorrectWeekday(weekday)) {
        this->weekday = weekday;
    } else {
        this->weekday = "NaN";
    }
}

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

// c_str() - std::string to const char*
[[maybe_unused]] char *Aeroflot::toCharArray() const {
     auto *s = new(std::nothrow) char[255];
    if (weekday.empty()) {
        try {
            throw ExceptionWeekday("Weekday is not specified!");
        } catch (const ExceptionWeekday &error) {
            std::cerr << error.what() << '\n';
        }
    } else {
        sprintf(s, "\nDestination: %s\nFlight number: %d\nPlane type: %s\nDeparture time: %s\nWeekday: %s",
                  destination.c_str(), flightNumber, planeType.c_str(), departureTime.toString().c_str(), weekday.c_str());
    }
    return s;
}
