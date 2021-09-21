//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include "WeekdayValidator.h"
#include <string>

bool WeekdayValidator::isCorrectWeekday(const std::string& weekday) {
    if (weekday == "Monday" || weekday == "Tuesday" || weekday == "Wednesday" || weekday == "Thursday" ||
    weekday == "Friday" || weekday == "Saturday" || weekday == "Sunday") {
        return true;
    } else {
        return false;
    }
}
