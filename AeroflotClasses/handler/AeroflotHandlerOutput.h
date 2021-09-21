//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#ifndef AEROFLOTCLASSES_AEROFLOTHANDLEROUTPUT_H
#define AEROFLOTCLASSES_AEROFLOTHANDLEROUTPUT_H


#include "../aeroflot/AeroflotTerminal.h"

class AeroflotHandlerOutput {
public:
    static void printTestResults(AeroflotTerminal terminal);

    static AeroflotTerminal initializeDepartures();

    [[maybe_unused]] static void printExceptionDemo();

    [[maybe_unused]] static void printCustomConsoleAeroflot();
};


#endif //AEROFLOTCLASSES_AEROFLOTHANDLEROUTPUT_H
