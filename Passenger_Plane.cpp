#include "Passenger_Plane.h"
#include <random>
#include <ctime>
void Passenger_Plane::fly() {
	int choice;
	cout << "Where will we fly?" << endl;
	cout << "Ukraine-Europe - 1, Ukraine-America-2, Ukraine-Asia - 3: ";
	cin >> choice;
	cout << endl;

	if (choice == 1) {
		srand(time(NULL));
		int temp = rand() % 2 + 1;
		if (temp == 1) {
			cout << "You have successfully landed to Ukraine-Europe" << endl;
		}
		else if (temp == 2) {
			cout << "Unfortunately the plane broke down and you died" << endl;
		}
	}
	else if (choice == 2) {
		srand(time(NULL));
		int temp = rand() % 2 + 1;
		if (temp == 1) {
			cout << "You have successfully landed to Ukraine-America" << endl;
		}
		else if (temp == 2) {
			cout << "Unfortunately the plane broke down and you died" << endl;
		}
	}
	else if (choice == 3) {
		srand(time(NULL));
		int temp = rand() % 2 + 1;
		if (temp == 1) {
			cout << "You have successfully landed to Ukraine-Asia" << endl;
		}
		else if (temp == 2) {
			cout << "Unfortunately the plane broke down and you died" << endl;
		}

	}
	else {
		cerr << "Wrong number" << endl;
	}
}