//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#ifndef AEROFLOTCLASSES_EXCEPTIONWEEKDAY_H
#define AEROFLOTCLASSES_EXCEPTIONWEEKDAY_H

#include <array>
#include <exception>

class ExceptionWeekday {
private:
	char str[200];
public:
	ExceptionWeekday(const char* str);
	const char * what() const;
};



#endif //AEROFLOTCLASSES_EXCEPTIONWEEKDAY_H
