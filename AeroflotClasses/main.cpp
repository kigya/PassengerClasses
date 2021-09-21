/**
 * 3. Aeroflot: Пункт назначения, Номер рейса, Тип самолета, Время вылета, Дни недели.
 * Создать массив объектов. Вывести:
 * а) список рейсов для заданного пункта назначения;
 * б) список рейсов для заданного дня недели;
 * в) список рейсов для заданного дня недели, время вылета для которых больше заданного.
 */

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
