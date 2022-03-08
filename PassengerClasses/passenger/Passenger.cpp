//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include "Passenger.h"
#include "../exception/ExceptionWeekday.h"
#include <iostream>
#include <utility>
#include "../validator/MovementCostValidator.h"
#include "../validator/WeekdayValidator.h"

Passenger::Passenger(): movementCost(0.0), departureTime(Time(0, 0)) {
    this->destination = "not determined";
    this->vehicleNumber = "not determined";
    this->weekday = "not determined";
}

Passenger::~Passenger() = default;

Passenger::Passenger(string destination, double movementCost, string planeType, const Time &departureTime,
                   const string &weekday) : destination(std::move(destination)),
                                            vehicleNumber(std::move(planeType)),
                                            departureTime(departureTime) {
    MovementCostValidator::isPositive(movementCost) ? this->movementCost = movementCost : this->movementCost = 0.0;
    if (WeekdayValidator::isCorrectWeekday(weekday)) {
        this->weekday = weekday;
    } else {
        this->weekday = "NaN";
    }
}

Passenger::Passenger(string destination, double movementCost, string vehicleNumber, const Time &departureTime) :
        destination(std::move(destination)),
        vehicleNumber(std::move(vehicleNumber)),
        departureTime(departureTime) {
    MovementCostValidator::isPositive(movementCost) ? this->movementCost = movementCost : this->movementCost = 0;
}

const string &Passenger::getDestination() const {
    return destination;
}

// attribute that suppresses warnings on unused entities.
[[maybe_unused]] double Passenger::getMovementCost() const {
    return movementCost;
}

[[maybe_unused]] const string &Passenger::getVehicleNumber() const {
    return vehicleNumber;
}

const Time &Passenger::getDepartureTime() const {
    return departureTime;
}

const string &Passenger::getWeekday() const {
    return weekday;
}

void Passenger::setDestination(string dest) {
    Passenger::destination = std::move(dest);
}

void Passenger::setMovementCost(double cost) {
    MovementCostValidator::isPositive(cost) ? this->movementCost = cost : this->movementCost = 0.0;
}

void Passenger::setVehicleNumber(string number) {
    Passenger::vehicleNumber = std::move(number);
}

void Passenger::setDepartureTime(Time time) {
    Passenger::departureTime = time;
}

void Passenger::setWeekday(const string& wd) {
    if (WeekdayValidator::isCorrectWeekday(weekday)) {
        this->weekday = wd;
    } else {
        this->weekday = "NaN";
    }
}

string Passenger::toString() {
    if (weekday.empty()) {
        try {
            throw ExceptionWeekday("Weekday is not specified!");
        } catch (const ExceptionWeekday &error) {
            std::cerr << error.what() << '\n';
        }
    } else {
        std::string str;
        str = "\nDestination: " + destination +
              "\nCost: " + std::to_string(movementCost) +
              "\nVehicle number: " + vehicleNumber +
              "\nDeparture time: " + departureTime.toString() +
              "\nWeekday: " + weekday + "\n";
        return str;
    }
    return std::string();
}
