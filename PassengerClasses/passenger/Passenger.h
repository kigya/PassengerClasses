//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#ifndef AEROFLOTCLASSES_AEROFLOT_H
#define AEROFLOTCLASSES_AEROFLOT_H

#include <string>
#include <system_error>
#include "../time/Time.h"


using namespace std;

class Passenger : public error_code {

protected:
    string weekday;
    string destination;
    string vehicleNumber;
    Time departureTime;
    double movementCost{};
public:
    Passenger();

    Passenger(string destination, double movementCost, string vehicleNumber, const Time &departureTime,
             const string &weekday);

    Passenger(string destination, double flightNumber, string vehicleNumber, const Time &departureTime);

    virtual ~Passenger();

    //specifies that the value returned by the function cannot be ignored and must be stored in some variable
    [[nodiscard]] const string &getDestination() const;

    [[maybe_unused]] [[nodiscard]] double getMovementCost() const;

    [[maybe_unused]] [[nodiscard]] const string &getVehicleNumber() const;

    [[nodiscard]] const Time &getDepartureTime() const;

    void setDestination(string dest);

    void setMovementCost(double cost);

    void setVehicleNumber(string number);

    void setDepartureTime(Time time);

    [[nodiscard]] const string &getWeekday() const;

    void setWeekday(const string& wd);

    virtual string toString();
};

#endif //AEROFLOTCLASSES_AEROFLOT_H
