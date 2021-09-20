#include <iostream>
#include "Time.h"
#include <string>

using namespace std;

Time::Time() = default;

Time::Time(int hours, int minutes) : hours(hours), minutes(minutes) {
    if (hours > 23 || hours < 0) {
        this->hours = 23;
    }
    if (minutes > 59 || minutes < 0) {
        this->minutes = 59;
    }
}

char *Time::toCharString() const {
    auto *s = new(std::nothrow) char[10];
    if ((hours >= 0 && hours <= 9) || (minutes >= 0 && minutes <= 9)) {
        if (minutes >= 0 && minutes <= 9) {
            sprintf_s(s, 10, "0%d:0%d", hours, minutes);
        } else {
            sprintf_s(s, 10, "0%d:%d", hours, minutes);

        }
    } else {
        sprintf_s(s, 10, "%d:%d", hours, minutes);
    }
    return s;
}

string Time::toString() const {
    std::string str;
    if ((hours >= 0 && hours <= 9) || (minutes >= 0 && minutes <= 9)) {
        if (minutes >= 0 && minutes <= 9) {
            str = "0" + std::to_string(hours) + ":0" + std::to_string(minutes);
        } else {
            str = "0" + std::to_string(hours) + ":" + std::to_string(minutes);

        }
    } else {
        str = std::to_string(hours) + ":" + std::to_string(minutes);
    }
    return str;
}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

void Time::setHours(int hours) {
    Time::hours = hours;
}

void Time::setMinutes(int minutes) {
    Time::minutes = minutes;
}
