// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

#include <stdio.h>

int main() {
   int i;
   double number, sum = 0.0;

   	for (i = 1; i <= 10; ++i) {
      	printf("Enter n%d: ", i);
      	scanf("%lf", &number);
      	if (number < 0.0) {
	        break;
	    }
    	sum += number; // sum = sum + number;
  	}
//  	printf("Sum of %f: ", sum);
//    printf("Sum of %lf: ", sum);
//printf("Sum of %.2lf: ", sum);
printf("Sum of %.2-f: ", sum);
}
