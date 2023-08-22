#include "Cargo_Plane.h"
void Cargo_Plane::fly() {
	int choice;
	cout << "Where to deliver the cargo?" << endl;
	cout << "Lviv - 1, Kyiv - 2, Drogobych - 3: ";
	cin >> choice;
	if (choice == 1) {
		cout << "Delivered to Lviv" << endl;
	}
	else if (choice == 2) {
		cout << "Delivered to Kyiv" << endl;
	}
	else if (choice == 3) {
		cout << "Delivered to Drogobych" << endl;
	}
	else {
		cerr << "Wrong number" << endl;
	}
}