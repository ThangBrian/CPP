#include"Vehicle.h"
#include <iostream>


using namespace std;
Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;
	cout << "In constructor with 2 parameters" << endl;
}
Vehicle::Vehicle() : Vehicle(4, 2) {
	cout << "In constructor with 0 parameters" << endl;
}
Vehicle::~Vehicle() {
	cout << "In destructor" << endl;
}

Vehicle::Vehicle(Vehicle& copy):Vehicle(copy.getNumWheels(), copy.getNumDoors()) {
	cout << "In copy constructor by reference" << endl;
}

Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) { 
	cout << "In copy constructor by pointer" << endl;
}

void Vehicle::setNumWheels(int w) { numWheels = w; }
int Vehicle::getNumWheels(void) { return numWheels; }

void Vehicle::setNumDoors(int d) { numDoors = d; }
int Vehicle::getNumDoors(void) { return numDoors; }

void Vehicle::printVehicle() { 
	cout << "The number of wheels is: " << getNumWheels() << endl;
	cout << "The number of doors is : " << getNumDoors()  << endl;
}