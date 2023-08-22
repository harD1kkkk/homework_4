#include "Military_Plane.h"
void Military_Plane::fly() {
	int choice;
	cout << "Who will we kaboom?" << endl;
	cout << "russia - 1, belorussian-2, afghanistan - 3: ";
	cin >> choice;
	cout << endl;
	if (choice == 1) {
		cout << "Successfully kaboom russia" << endl;
	}
	else if (choice == 2) {
		cout << "Successfully kaboom belorussian" << endl;
	}
	else if (choice == 3) {
		cout << "Successfully kaboom afghanistan" << endl;
	}
	else {
		cerr << "Wrong number" << endl;
	}
}
