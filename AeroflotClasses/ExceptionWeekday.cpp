//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include "ExceptionWeekday.h"

ExceptionWeekday::ExceptionWeekday(const char* str) {
	strcpy_s(this->str, 200, str);
}

const char * ExceptionWeekday::what() const {
	return str;
}

