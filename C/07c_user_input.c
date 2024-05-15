//#include <stdio.h>
//
//int main() {
//  // Create an integer variable that will store the number we get from the user
//  int myNum;
//
//  // Ask the user to type a number
//  printf("Type a number and press enter: \n"); 
//
//  // Get and save the number the user types
//  scanf("%d", &myNum);
//
//  // Print the number the user typed
//  printf("Your number is: %d", myNum);
//
//  return 0;
//}
#include <stdio.h>
void main() {

//int myNumber;
//printf("Type a number: \n");
//scanf("%d",&myNumber);
//printf("Entered number is: %d",myNumber);
//char firstName[30];
//
//printf("Enter your first name: \n");
//
//// Get and save the text
//scanf("%s", firstName);
//
//// Output the text
//printf("Hello %s", firstName);


char fullName[30];

printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);

printf("Hello %s", fullName);

// Type your full name: John Doe
// Hello John Doe


}
