#include <iostream> // IOSTEAM for standard input and output cin>> and cout>> 
//#include <string> // for the string
using namespace std;
 
int main () {
	
// Create a string variable
//string greeting = "Hello";
//char msg[50] = "Hello";
//
//
string firstName = "Sumit ";
string lastName = "Luniwal";
string fullName = firstName + lastName;
cout << fullName ;

cout << "\n"+firstName + lastName;


cout << "\n" <<firstName << lastName;
//std::cout << "testing";
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "\nThe length txt.length() of the txt string is: " << txt.length();
cout << "\nThe length txt.size() of the txt string is: " << txt.size();

string myString = "Hello";
cout << "\n"<<myString[0];
cout << myString.at(myString.length() - 1);  // Last character
//string txt1 = "It\'s alright.";

//string txt = "We are the so-called "Vikings" from the north.";
string txt1 = "We are the so-called \"Vikings\" from the north.";
cout << txt1;
string txt2 = "The character \\ is called backslash.";
cout << txt2;

// Outputs H


string firstNameInput;
cout << "\nType your first name: ";
cin >> firstNameInput; // get user input from the keyboard
cout << "Your name is: " << firstNameInput;
}
