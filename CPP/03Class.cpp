// C++ Program to Demonstrate the Concept of Dynamic binding
// with the help of virtual function
#include <iostream>
using namespace std;

class GFG {
public:
    void call_Function() // function that call print
    {
        cout << "Printing the Base class Content" << endl;
    }
};

//int main()
//{
//    GFG geeksforgeeks; // Creating GFG's object
//    geeksforgeeks.call_Function(); // Calling call_Function
////    GFG2 geeksforgeeks2; // creating GFG2 object
////    geeksforgeeks2.call_Function(); // calling call_Function
//                                    // for GFG2 object
//    return 0;
//}

class otherClass{
	public:
		int name;
};

//class MyClass{// The class
//  public:int myNum; 
//}
//
int main(){
	
    otherClass p1; // p1 is a object
     	p1.name = 15;
		 cout << p1.name << endl;
	return 0;
}
