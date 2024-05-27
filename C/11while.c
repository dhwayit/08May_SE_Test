#include<stdio.h>
// Program to add numbers until the user enters zero
void main(){
	int number, sum = 0;
	do{
		printf("Enter a number: ");
	    scanf("%d", &number);
	    sum += number; // sum = sum+number;
	}
	while(number != 0);
	printf("Sum = %d",sum);
}
