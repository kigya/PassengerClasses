//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#ifndef AEROFLOTCLASSES_AEROFLOTHANDLEROUTPUT_H
#define AEROFLOTCLASSES_AEROFLOTHANDLEROUTPUT_H


#include "AeroflotTerminal.h"

class AeroflotHandlerOutput {
public:
    static void printTestResults(AeroflotTerminal terminal);

    static AeroflotTerminal initializeDepartures();

    static void printExceptionDemo();
};


#endif //AEROFLOTCLASSES_AEROFLOTHANDLEROUTPUT_H
