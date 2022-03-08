//
// Created by Borichevskiy Kirill on 16.11.2021.
//

#include <iostream>
#include "Train.h"
#include "../exception/ExceptionWeekday.h"

Train::Train() = default;

Train::Train(const string &destination, double movementCost, const string &vehicleNumber, const Time &departureTime,
             const string &weekday, bool businessClass) : Passenger(destination, movementCost, vehicleNumber, departureTime,
                                                            weekday), businessClass(businessClass) {}

Train::Train(const string &destination, double flightNumber, const string &vehicleNumber, const Time &departureTime,
             bool businessClass) : Passenger(destination, flightNumber, vehicleNumber, departureTime), businessClass(businessClass) {}

Train::~Train() = default;

string Train::toString() {
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
              "\nWeekday: " + weekday + "\n"
              "Business class: " + (businessClass ? "Yes" : "No") + "\n";
        return str;
    }
    return std::string();
}

bool Train::isBusinessClass() const {
    return businessClass;
}

void Train::setBusinessClass(bool businessClass) {
    Train::businessClass = businessClass;
}
