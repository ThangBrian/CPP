
#include<iostream>
using namespace std;
namespace cst8219 {
	class MyFirstClass{ };
}
class MyFirstClass {
private:
	int age;
	char* firstName, * lastName;
public:
	MyFirstClass() : MyFirstClass(0, NULL, NULL) { 
		int i = 0; i++;
	}
	MyFirstClass(int a, char* f, char* l) {
		age = a;
		firstName = f;
		lastName = l;
	}

	~MyFirstClass() {
		int i = 0; i++;
	}

	int getAge() { return age; }
	char* getFirstName() { return firstName; }
	char* getLastName() { return lastName; }

protected:
	void setFirstName(char* f) { firstName = f; }
	void setLastName(char* l) { lastName = l;  }
};
class MySecondClass { };
int main(int argc, char **argv)
{
	MyFirstClass mfc;
   cout << "Hello World!" << endl;
   return 0;
}