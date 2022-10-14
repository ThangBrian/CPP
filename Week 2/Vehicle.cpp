#include"Vehicle.h"
#include <string>
#include <iostream>


using namespace std;
Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;
	//cout << "In constructor with 2 parameters" << endl;
}
Vehicle::Vehicle() : Vehicle(4, 2) {
	//cout << "In constructor with 0 parameters" << endl;
}
Vehicle::~Vehicle() {
	//cout << "In destructor" << endl;
}

Vehicle::Vehicle(Vehicle& copy):Vehicle(copy.getNumWheels(), copy.getNumDoors()) {
	//cout << "In copy constructor by reference" << endl;
}

Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) { 
	//cout << "In copy constructor by pointer" << endl;
}

Vehicle& Vehicle::operator=(Vehicle& const V) {
	this->setNumWheels(V.getNumWheels());
	this->setNumDoors(V.getNumDoors());
	return *this;
}

bool Vehicle::operator==(Vehicle& const V) {
	if (this->getNumWheels() == V.getNumWheels() && this->getNumDoors() == V.getNumDoors())
		return true;
	return false;

}

bool Vehicle::operator!=(Vehicle& const V) {
	return !operator==(V);
}

Vehicle Vehicle::operator++(int i) { //post-fix
	Vehicle temp = *this;
	operator++();
	return temp;
}

Vehicle Vehicle::operator++() {
	this->setNumWheels(this->getNumWheels() + 1);
	this->setNumDoors(this->getNumDoors() + 1);
	return *this;
}

Vehicle Vehicle::operator--(int i) { // post-fix
	Vehicle temp = *this;
	operator--();
	return temp;
}

Vehicle Vehicle::operator--() {
	this->setNumWheels(this->getNumWheels() - 1);
	this->setNumDoors(this->getNumDoors() - 1);
	return *this;
}

ostream& operator<<(ostream& out, const Vehicle& V)
{
	out << "The number of wheels is: " << V.numWheels
	<< " The number of doors is : " << V.numDoors;
	return out;
}

void Vehicle::setNumWheels(int w) { numWheels = w; }
int Vehicle::getNumWheels(void) { return numWheels; }

void Vehicle::setNumDoors(int d) { numDoors = d; }
int Vehicle::getNumDoors(void) { return numDoors; }

void Vehicle::printVehicle() { 
	cout << "The number of wheels is: " << getNumWheels() << endl;
	cout << "The number of doors is : " << getNumDoors()  << endl;
}
