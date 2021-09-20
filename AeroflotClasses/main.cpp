#include <iostream>
#include "Time.h"
#include "Aeroflot.h"
#include "AeroflotTerminal.h"

int main() {
    Aeroflot belavia("Riga", 1, "Boeing 737", Time(12, 45), "Tuesday");
    Aeroflot quatarAirways("Riga", 2, "Piper Pacer", Time(15, 30), "Monday");
    Aeroflot emirates("Melbourne", 3, "Piper PA-23", Time(8, 0), "Friday");
    Aeroflot hainanAirlines("Doha", 4, "Witchcraft Baron", Time(7, 50), "Friday");
    Aeroflot quantasAirways("Johannesburg", 5, "Robinson R44", Time(19, 39), "Wednesday");
    Aeroflot garudaIndonesia("Jakarta", 6, "Junkers Ju 87", Time(22, 30), "Saturday");
    Aeroflot swissInternational("Melbourne", 7, "Cessna 172", Time(20, 10), "Friday");
    Aeroflot airAsia("Beijing", 8, "Piper J-3 Cub", Time(23, 15), "Monday");
    Aeroflot airCanada("Melbourne", 9, "Douglas DC-3", Time(1, 20), "Sunday");
    Aeroflot finnair("Stockholm", 10, "Avro 504", Time(21, 50), "Thursday");

    AeroflotTerminal terminal{};
    terminal.addDepartureToArray(belavia);
    terminal.addDepartureToArray(quatarAirways);
    terminal.addDepartureToArray(emirates);
    terminal.addDepartureToArray(hainanAirlines);
    terminal.addDepartureToArray(quantasAirways);
    terminal.addDepartureToArray(garudaIndonesia);
    terminal.addDepartureToArray(swissInternational);
    terminal.addDepartureToArray(airAsia);
    terminal.addDepartureToArray(airCanada);
    terminal.addDepartureToArray(finnair);

    cout << "\n-----Departures to Riga:-----" << endl;
    terminal.printDepartureListByCertainDestination("Riga");

    cout << "\n-----Departures to Melbourne:-----" << endl;
    terminal.printDepartureListByCertainDestination("Melbourne");

    cout << "\n-----Departures to Beijing:-----" << endl;
    terminal.printDepartureListByCertainDestination("Beijing");

    cout << "\n-----Departures on Friday:-----" << endl;
    terminal.printDepartureListByCertainWeekday("Friday");

    cout << "\n-----Departures on Monday:-----" << endl;
    terminal.printDepartureListByCertainWeekday("Monday");

    cout << "\n-----Departures on Monday 10:30 and later:-----" << endl;
    terminal.printDepartureListByCertainWeekdayWithTime("Friday", Time(10, 30));

    cout << "-----Exception demonstration-----" << endl;
    Aeroflot americanAirlines("Denver", 11, "Avro 500", Time(10, 20));
    cout << americanAirlines.toString();

    return 0;
}
