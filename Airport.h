#pragma once
#include <iostream>
using namespace std;

class Airport
{
private:
	string name;
	int type;
	string type_plane;
public:
	void setName(string name);
	void initializeType(int type);
	void setTypePlane(int type);

	string getName();
	string getTypePlane();
};

