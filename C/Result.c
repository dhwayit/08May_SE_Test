#include <stdio.h>

void main() {
//int num1, num2, num3; 
float num1, num2, num3, sum, average,avg_sum;
printf("Enter three numbers: ");
scanf("%f %f %f", &num1, &num2, &num3);

//printf("Enter three numbers: %f\n",num2);
//printf("Enter three numbers: %.2f\n", num3);
sum = num1 + num2 + num3;
//sum = (num1 + num2 + num3)/3;
avg_sum=sum/3;
printf("Your Total Marks is : %.2f\n", sum);
printf("Average mark is: %.2f\n", avg_sum);

}
