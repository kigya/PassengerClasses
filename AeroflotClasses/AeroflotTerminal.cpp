//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include "AeroflotTerminal.h"
#include <string>
#include <iostream>

[[maybe_unused]]  void AeroflotTerminal::addDepartureToArray(Aeroflot const &item) {
    array.push_back(item);
}

const vector<Aeroflot> &AeroflotTerminal::getArray() const {
    return array;
}


void AeroflotTerminal::printDepartureListByCertainDestination(const string &dest) {
    for (auto &i: array) {
        if (i.getDestination() == dest) {
            cout << i.toString();
        }
    }
}

void AeroflotTerminal::printDepartureListByCertainWeekday(const string &weekday) {
    for (auto &i: array) {
        if (i.getWeekday() == weekday) {
            cout << i.toString();
        }
    }
}

void AeroflotTerminal::printDepartureListByCertainWeekdayWithTime(const string &weekday, Time time) {
    for (auto &i: array) {
        if (i.getWeekday() == weekday) {
            if (i.getDepartureTime().getHours() > time.getHours()) {
                cout << i.toString();
            } else if (i.getDepartureTime().getHours() == time.getHours()) {
                if (i.getDepartureTime().getMinutes() > time.getMinutes()) {
                    cout << i.toString();
                }
            }
        }
    }
}



