#pragma once
#include "Plane.h"
#include <iostream>
using namespace std;

class Cargo_Plane :
    public Plane
{
public:
    void fly() override;
};

