//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#ifndef AEROFLOTCLASSES_EXCEPTIONWEEKDAY_H
#define AEROFLOTCLASSES_EXCEPTIONWEEKDAY_H

#include <array>
#include <exception>
#include <string>

class ExceptionWeekday {
private:
    std::string str;
public:
    explicit ExceptionWeekday(const std::string& str);
	[[nodiscard]] std::string what() const;
};

#endif //AEROFLOTCLASSES_EXCEPTIONWEEKDAY_H
