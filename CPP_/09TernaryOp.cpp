#include <iostream>
#include <string>
using namespace std;

int main() {
  int age = 15;
//  if (time < 18) {
//    cout << "Good day.";
//  } else {
//    cout << "Good evening.";
//  }


//	string res = (Condition) ? "true block" : "false block";
  	string res = (age < 18) ? "teenage." : "Adult.";
	cout <<res;

  return 0;
}

