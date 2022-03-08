//
// Created by Borichevskiy Kirill on 15.11.2021.
//

#ifndef PASSENGERCLASSES_PLANE_H
#define PASSENGERCLASSES_PLANE_H


#include "Passenger.h"

class Plane : public Passenger {
    Plane();

    bool meals;

public:

    Plane(const string &destination, double movementCost, const string &vehicleNumber, const Time &departureTime,
          const string &weekday, bool meals);

    Plane(const string &destination, double flightNumber, const string &vehicleNumber, const Time &departureTime,
          bool meals);

    ~Plane() override;

    string toString() override;

    bool isMeals() const;

    void setMeals(bool meals);
};


#endif //PASSENGERCLASSES_PLANE_H
