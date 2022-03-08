//
// Created by Borichevskiy Kirill on 16.11.2021.
//

#include <iostream>
#include "Car.h"
#include "../exception/ExceptionWeekday.h"

Car::Car() = default;

Car::Car(const string &destination, double movementCost, const string &vehicleNumber, const Time &departureTime,
             const string &weekday, bool isTruck) : Passenger(destination, movementCost, vehicleNumber, departureTime,
                                                            weekday), isTruck(isTruck) {}

Car::Car(const string &destination, double flightNumber, const string &vehicleNumber, const Time &departureTime,
             bool isTruck) : Passenger(destination, flightNumber, vehicleNumber, departureTime), isTruck(isTruck) {}

Car::~Car() = default;

string Car::toString() {
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
              "Truck: " + (isTruck ? "Yes" : "No") + "\n";
        return str;
    }
    return std::string();
}

void Car::setIsTruck(bool isTruck) {
    Car::isTruck = isTruck;
}
