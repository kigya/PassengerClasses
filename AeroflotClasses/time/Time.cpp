#include <iostream>
#include "Time.h"
#include "../validator/TimeValidator.h"
#include <string>
const int HOURS_MAX = 23;
const int MINUTES_MAX = 59;
using namespace std;

Time::Time() = default;

Time::Time(int hours, int minutes) : hours(hours), minutes(minutes) {
    if (!TimeValidator::isValidHours(hours)) {
        this->hours = HOURS_MAX;
    }
    if (!TimeValidator::isValidMinutes(minutes)) {
        this->minutes = MINUTES_MAX;
    }
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

[[maybe_unused]] char *Time::toCharArray() const {
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

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

[[maybe_unused]] void Time::setHours(int hours) {
    Time::hours = hours;
}

[[maybe_unused]] void Time::setMinutes(int minutes) {
    Time::minutes = minutes;
}

void Time::setTime(int hours, int minutes) {
    if (!TimeValidator::isValidHours(hours)) {
        this->hours = HOURS_MAX;
    } else {
        Time::hours = hours;
    }
    if (!TimeValidator::isValidMinutes(minutes)) {
        this->minutes = MINUTES_MAX;
    } else {
        Time::minutes = minutes;
    }
}
