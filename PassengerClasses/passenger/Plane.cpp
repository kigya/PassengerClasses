//
// Created by Borichevskiy Kirill on 15.11.2021.
//

#include <iostream>
#include "Plane.h"
#include "../exception/ExceptionWeekday.h"

Plane::Plane() = default;

Plane::Plane(const string &destination, double movementCost, const string &vehicleNumber, const Time &departureTime,
             const string &weekday, bool meals) : Passenger(destination, movementCost, vehicleNumber, departureTime,
                                                            weekday), meals(meals) {}

Plane::Plane(const string &destination, double flightNumber, const string &vehicleNumber, const Time &departureTime,
             bool meals) : Passenger(destination, flightNumber, vehicleNumber, departureTime), meals(meals) {}

Plane::~Plane() = default;

string Plane::toString() {
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
              "Meals: " + (meals ? "Yes" : "No") + "\n";
        return str;
    }
    return std::string();
}

bool Plane::isMeals() const {
    return meals;
}

void Plane::setMeals(bool meals) {
    Plane::meals = meals;
}
