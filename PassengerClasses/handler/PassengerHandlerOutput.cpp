//
// Created by Borichevskiy Kirill
// Belarusian State University 2021
//

#include <iostream>
#include "PassengerHandlerOutput.h"
#include "../passenger/Plane.h"
#include "../passenger/Train.h"
#include "../passenger/Car.h"


void PassengerHandlerOutput::printResult() {
    try {
        int const N = 5;
        Passenger *arr[N];
        srand(time(NULL));
        char str[] = "third";

        for (int i = 0; i < N; i++) {
            int y = (rand() % 3);
            switch (y) {
                case 0: {
                    arr[i] = new Plane("Riga", 345.99, "Plane Boeing 737", Time(12, 45), "Tuesday", true);
                    break;
                }
                case 1: {
                    arr[i] = new Train("Manchester", 32.5, "Train Piper Pacer", Time(15, 30), "Monday", false);
                    break;
                }
                case 2: {
                    arr[i] = new Car("Melbourne", 99.9, "BMW", Time(8, 0), "Friday", false);
                    break;
                }
                default:
                    break;
            }
        }
        for (int i = 0; i < N; i++) {
            std::cout << arr[i]->toString() << std::endl;
        }
    }
    catch (exception &e) {
        cerr << "exception caught: " << e.what() << '\n';
    }
}


