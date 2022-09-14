// Week 1.cpp : Defines the entry point for the application.
//

#include "Week 1.h"

#define usingNamespaces 0

#if usingNamespaces == 1
int main()
{
	#pragma message("Not using namespaces");
	std::cout << "Hello world!" << std::endl;
	return 0;
}
#else
using namespace std;
int main()
{
	#pragma message("Using namespaces")
	cout << "Hello world!" << endl;
	return 0;
}
#endif
