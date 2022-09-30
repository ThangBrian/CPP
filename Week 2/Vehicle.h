#pragma once

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
};