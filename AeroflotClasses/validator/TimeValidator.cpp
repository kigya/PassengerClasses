//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//
//

#include "TimeValidator.h"

bool TimeValidator::isValidHours(int hours) {
    return (hours > 23 || hours < 0);
}