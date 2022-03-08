//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include "ExceptionWeekday.h"

ExceptionWeekday::ExceptionWeekday(const std::string &str) {
    this->str = str;
}

std::string ExceptionWeekday::what() const {
    return str;
}

