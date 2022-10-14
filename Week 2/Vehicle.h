#pragma once
#include <iostream>
using namespace std;
class Vehicle {
private:
	int numWheels;
	int	numDoors;
public:
	Vehicle(int, int);
	Vehicle();
	Vehicle(Vehicle&);
	Vehicle(Vehicle*);
	~Vehicle();
	void printVehicle();
	void setNumWheels(int);
	int  getNumWheels(void);
	void setNumDoors(int);
	int  getNumDoors(void);
	Vehicle& operator=(Vehicle& V);
	bool operator==(Vehicle& V);
	bool operator!=(Vehicle& V);
	Vehicle operator++();
	Vehicle operator++(int) ;
	Vehicle operator--();
	Vehicle operator--(int);
	friend ostream& operator<<(ostream& os, const Vehicle& V);
};