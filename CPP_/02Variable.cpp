#include <iostream>
using namespace std;
int main(){
//	int user id = ""; // wrong
//	int userid; // declaration correct variable name
//	userid = 777; // assign value
	int userid = 777; // declaration with assignment
	cout<<"Hello";
	cout<<userid;
	int myNum = 5;               // Integer (whole number without decimals)
	double myFloatNum = 5.99;    // Floating point number (with decimals)
	char myLetter = 'D';         // Character
	string myText = "Hello";     // String (text)
	bool myBoolean = true;       // Boolean (true 1)
//	bool myBoolean = false;       // Boolean (false 0)
//  bool myBoolean = "data";       // Boolean (true 1) // other value will be considered as true
	cout<<myBoolean;
	
	int myAge = 35;
	cout << "I am " << myAge << " years old.";
	return 0;	
}

//In C++, there are different types of variables (defined with different keywords), for example:
//
//int - stores integers (whole numbers), without decimals, such as 123 or -123
//double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//string - stores text, such as "Hello World". String values are surrounded by double quotes
//bool - stores values with two states: true or false

