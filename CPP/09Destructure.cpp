// C++ program to demonstrate the execution of constructor
// and destructor

#include <iostream>
using namespace std;

class Test {
public:
	// User-Defined Constructor
	Test() { cout << "\nConstructor executed"; }

	// User-Defined Destructor
	~Test() { cout << "\nDestructor executed"; }
	
		public:int display(){
        cout << endl << "\t testing";
    	return 45;
	}
};
main()
{
	Test t;
	t.display();
	return 0;
}

