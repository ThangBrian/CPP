// Week 1.cpp : Defines the entry point for the application.
//

#include "Week 1.h"
#pragma message("Hello world")

using namespace std;

#define name "Eric"
#define age 40

int main()
{
#if age<40
	cout << "You are under 40" << endl;
#elif age < 60
	cout << "You are under 60" << endl;
#else
	cout << "You are over 60" << endl;
#endif

	return 0;
}
