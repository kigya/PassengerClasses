//
// Created by Borichevskiy Kirill on 16.11.2021.
//

#ifndef PASSENGERCLASSES_CAR_H
#define PASSENGERCLASSES_CAR_H


#include "Passenger.h"

class Car : public Passenger {
    Car();

    bool isTruck;

public:

    Car(const string &destination, double movementCost, const string &vehicleNumber, const Time &departureTime,
          const string &weekday, bool isTruck);

    Car(const string &destination, double flightNumber, const string &vehicleNumber, const Time &departureTime,
          bool isTruck);

    ~Car() override;

    string toString() override;

    void setIsTruck(bool isTruck);

};



#endif //PASSENGERCLASSES_CAR_H
