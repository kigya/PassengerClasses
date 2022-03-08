//
// Created by Borichevskiy Kirill on 15.11.2021.
//

#ifndef PASSENGERCLASSES_TRAIN_H
#define PASSENGERCLASSES_TRAIN_H


#include "Passenger.h"

class Train : public Passenger {
    Train();

    bool businessClass;

public:

    Train(const string &destination, double movementCost, const string &vehicleNumber, const Time &departureTime,
          const string &weekday, bool businessClass);

    Train(const string &destination, double flightNumber, const string &vehicleNumber, const Time &departureTime,
          bool businessClass);

    ~Train() override;

    string toString() override;

    bool isBusinessClass() const;

    void setBusinessClass(bool businessClass);
};


#endif //PASSENGERCLASSES_TRAIN_H
