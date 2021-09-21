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

class Aeroflot : public error_code {

    string destination;
    int flightNumber{};
    string planeType;
    Time departureTime;
    string weekday;

public:
    Aeroflot();

    Aeroflot(string destination, int flightNumber, string planeType, const Time &departureTime,
             const string &weekday);

    Aeroflot(string destination, int flightNumber, string planeType, const Time &departureTime);

    virtual ~Aeroflot();

    //specifies that the value returned by the function cannot be ignored and must be stored in some variable
    [[nodiscard]] const string &getDestination() const;

    [[maybe_unused]] [[nodiscard]] int getFlightNumber() const;

    [[maybe_unused]] [[nodiscard]] const string &getPlaneType() const;

    [[nodiscard]] const Time &getDepartureTime() const;

    void setDestination(const string &destination);

    void setFlightNumber(int flightNumber);

    void setPlaneType(const string &planeType);

    void setDepartureTime(const Time &departureTime);

    [[nodiscard]] string toString() const;

    [[maybe_unused]] [[nodiscard]] char * toCharArray() const;

    [[nodiscard]] const string &getWeekday() const;

    void setWeekday(const string &weekday);

};

#endif //AEROFLOTCLASSES_AEROFLOT_H
