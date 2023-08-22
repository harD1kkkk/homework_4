#include "Airport.h"
void Airport::setName(string name) {
	this->name = name;
}
void Airport::initializeType(int type) {
    this->type = type;
}
void Airport::setTypePlane(int type) {
    if (type == 1) {
        this->type_plane = "Passenger_Plane";

        int choice;
        cout << "What do you want?" << endl;
        cout << "backflip - 1, somersault forward - 2: ";
        cin >> choice;
        if (choice == 1) {
            cout << "WOOWOWOOWOWOWOWO" << endl;
        }
        else if (choice == 2) {
            cout << "It was amazing" << endl;
        }
        else {
            cerr << "wrong number" << endl;
        }
    }
    else if (type == 2) {
        this->type_plane = "Cargo_Plane";

        int choice;
        cout << "What do you want?" << endl;
        cout << "Take the load - 1, unhook the load - 2: ";
        cin >> choice;
        if (choice == 1) {
            cout << "The cargo was successfully taken" << endl;
        }
        else if (choice == 2) {
            cout << "The cargo was successfully unhooked" << endl;
        }
        else {
            cerr << "Wrong number" << endl;
        }
    }
    else if (type == 3) {
        this->type_plane = "Military_Plane";

        int choice;
        cout << "What do you want?" << endl;
        cout << "Shoot - 1, launch a rocket - 2: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Well done!" << endl;
        }
        else if (choice == 2) {
            cout << "The rocked launched,but no one knows where" << endl;
        }
        else {
            cerr << "Wrong number" << endl;
        }
    }
    else {
        cerr << "Error number" << endl;
    }
}

string Airport::getName() {
    return name;
}

string Airport::getTypePlane() {
    return type_plane;
}
