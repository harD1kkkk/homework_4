// zavd_70.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Plane.h"
#include "Passenger_Plane.h"
#include "Cargo_Plane.h"
#include "Military_Plane.h"
#include "Airport.h"
using namespace std;

int main()
{
    Airport** air = nullptr;
    int size = 0;
    Passenger_Plane pp;
    Cargo_Plane cp;
    Military_Plane mp;

    cout << "Welcome to planes\n";
    while (true) {
        int choice;
        cout << "\tChoose your plane\n";
        cout << "\tPassenger_Plane - 1 \n\tCargo_Plane - 2 \n\tMilitary_Plane - 3 \n\tAdd new plane - 4 \n\tShow planes - 5 \n\tExit - 6\n";
        cout << "Make a choice: ";
        cin >> choice;
        if (choice == 1) {
            pp.fly();
        }
        else if (choice == 2) {
            cp.fly();
        }
        else if (choice == 3) {
            mp.fly();
        }
        else if (choice == 4) {
            cout << "Enter count planes ";
            cin >> size;
            
            air = new Airport * [size];

            for (int i = 0; i < size; i++) {
                air[i] = new Airport;
                string name;
                int type;

                cout << "Enter name: ";
                cin >> name;
                air[i]->setName(name);

                cout << "Enter type (1 - Passenger_Plane, 2 - Cargo_Plane, 3 - Military_Plane): ";
                cin >> type;
                air[i]->setTypePlane(type);
            }

        }
        else if (choice == 5) {
            if (size != 0) {
                for (int i = 0; i < size; i++) {
                    cout << "Plane " << air[i]->getName() << " is flying. Type: " << air[i]->getTypePlane() << endl;
                }
            }
            else {
                cerr << "You don't have any planes!" << endl;
            }
        }
        else if (choice == 6) {
            cout << "Goodbye!" << endl;
            for (int i = 0; i < size; i++) {
                delete air[i];
            }
            delete[] air;
            break;
        }
        else {
            cerr << "wrong number" << endl;
        }
    }
}

