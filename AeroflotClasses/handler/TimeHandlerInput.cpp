//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include <iostream>
#include "TimeHandlerInput.h"
#include "../validator/TimeValidator.h"
const int HOURS_MAX = 23;
const int MINUTES_MAX = 59;

Time TimeHandlerInput::iConsoleTime() {
	Time time;
	int hours = 0;
    int minutes = 0;

    std::cout << "Enter hours:" << std::endl;
    std::cin >> hours;
    if (!TimeValidator::isValidHours(hours)) {
        hours = HOURS_MAX;
    }

    std::cout << "Enter minutes:" << std::endl;
    std::cin >> minutes;
    if (!TimeValidator::isValidMinutes(minutes)) {
        minutes = MINUTES_MAX;
    }

	time.setTime(hours, minutes);
	return time;
}