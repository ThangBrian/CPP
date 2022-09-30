
#include<iostream>
#include<string>


using namespace std;
namespace CST8219 {
	class Vehicle {
	private:
		int numWheels;
		int	numDoors;
	public:
		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;
			cout << "In constructor with 2 parameters" << endl;
		}
		Vehicle(int w) : Vehicle(w, 4) {
			cout << "In constructor with 1 parameters " << endl;
		}
		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		}
		~Vehicle() {
			cout << "In destructor" << endl;
		}
	};
}

void clearCin() {
	cin.clear();
	cin.ignore(256, '\n');
}

int main(int argc, char** argv)
{
	using namespace CST8219;
	Vehicle* pVehicle = NULL;
	do{
		string option;
		cout << "Please choose an option.\n[1] Create a new vehicle\n[q] Quit" << endl;
		getline(cin, option);
		if (option.compare("q") != 0 && option.compare("Q") != 0) {
			if (pVehicle)
				delete pVehicle;
			int d, w;
			cout << "enter number of doors" << endl;
			while (true) {
				while (!(cin >> d)) {
					cout << "Error! Please enter an integer for the number of doors" << endl;
					clearCin();
				}
				if (d > 0)
					break;
				else
					cout << "Error! Please enter a positive integer for the number of doors" << endl;
			}

			cout << "enter number of wheels" << endl;
			while (true) {
				while (!(cin >> w)) {
					cout << "Error! Please enter an integer for the number of wheels" << endl;
					clearCin();
				}
				if (w > 0)
					break;
				else
					cout << "Error! Please enter a positive integer for the number of wheels" << endl;
			}
			pVehicle = new Vehicle(w, d);
		clearCin();
		}
		else {
			break;
		}
	} while (true);
	Vehicle veh1;
	cout << "Vehicles takes " << sizeof(veh1) << endl;
	Vehicle veh2(4);
	cout << "Vehicles takes " << sizeof(veh2) << endl;
	Vehicle veh3(4,2);
	cout << "Vehicles takes " << sizeof(veh3) << endl;
	delete pVehicle;
	return 0;
}