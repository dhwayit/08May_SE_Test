// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

#include <stdio.h>

//The goto statement allows us to transfer control of the program to the specified label.

int main() {

   const int sumit = 100;
   int i;
   double number, average, sum = 0.0;

   for (i = 1; i <= sumit; ++i) {
      printf("%d. Enter a number: ", i);
      scanf("%lf", &number);
      
      // go to jump if the user enters a negative number
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }

jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);

   return 0;
}
