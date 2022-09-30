
#include<iostream>
#include<string>
#include"Vehicle.h"


using namespace std;

void clearCin() {
	cin.clear();
	cin.ignore(256, '\n');
}


void CreateVehicle(Vehicle& v, int w = 4, int d = 2) {
	v.setNumWheels(w);
	v.setNumDoors(d);
}

int main(int argc, char** argv)
{
	Vehicle original;    //empty constructor no ( )

	Vehicle copy(original); // copy constructor by reference

	Vehicle secondCopy(&original); //copy constructor by pointer
	copy.printVehicle();
	CreateVehicle(copy, 2); //wheels is 2, everything else is default value
	copy.printVehicle();
	CreateVehicle(copy, 2, 3); //wheels is 2, doors is 3
	copy.printVehicle();
	copy = secondCopy;
	copy.printVehicle();	// copy is same as second copy
	return 0;
}
