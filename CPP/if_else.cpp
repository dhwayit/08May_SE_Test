// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped


#include <iostream>
using namespace std;

int main() {

  int number;

  std::cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number > 0) {
    cout << "You entered a positive integer: " << number << std::endl;
  }

 	cout << "This statement is always executed.";

  return 0;
}




//#include <iostream>
////using namespace std;
//
//int main() {
//
//  int number;
//
//  std::cout << "Enter an integer: ";
//  std::cin >> number;
//
//  // checks if the number is positive
//  if (number > 0) {
//    std::cout << "You entered a positive integer: " << number << std::endl;
//  }
//
//  std::cout << "This statement is always executed.";
//
//  return 0;
//}
