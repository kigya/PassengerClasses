//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#ifndef AEROFLOTCLASSES_AEROFLOTTERMINAL_H
#define AEROFLOTCLASSES_AEROFLOTTERMINAL_H

#include <vector>
#include "Aeroflot.h"
#include "../time/Time.h"

class AeroflotTerminal {

public:
    std::vector<Aeroflot> array;

    AeroflotTerminal() = default;

    // avoid unintentional implicit conversion with explicit
    [[maybe_unused]] explicit AeroflotTerminal(const vector<Aeroflot> &array);

    [[maybe_unused]] [[nodiscard]] const vector<Aeroflot> &getArray() const;

    void addDepartureToArray(const Aeroflot &item);

    void printDepartureListByCertainDestination(const string &dest);

    void printDepartureListByCertainWeekday(const string &weekday);

    void printDepartureListByCertainWeekdayWithTime(const string &weekday, Time time);
};


#endif //AEROFLOTCLASSES_AEROFLOTTERMINAL_H
