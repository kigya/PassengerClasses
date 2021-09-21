#include <iostream>
#include "time/Time.h"
#include "aeroflot/Aeroflot.h"
#include "aeroflot/AeroflotTerminal.h"
#include "handler/AeroflotHandlerOutput.h"

int main() {
    AeroflotTerminal terminal(AeroflotHandlerOutput::initializeDepartures());
    AeroflotHandlerOutput::printTestResults(terminal);
    // AeroflotHandlerOutput::printExceptionDemo();

    // AeroflotHandlerOutput::printCustomConsoleAeroflot();

    return 0;
}
