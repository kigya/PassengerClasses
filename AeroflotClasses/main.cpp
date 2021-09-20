#include <iostream>
#include "Time.h"
#include "Aeroflot.h"
#include "AeroflotTerminal.h"
#include "AeroflotHandlerOutput.h"

int main() {
    AeroflotTerminal terminal(AeroflotHandlerOutput::initializeDepartures());
    AeroflotHandlerOutput::printTestResults(terminal);
    AeroflotHandlerOutput::printExceptionDemo();

    return 0;
}
