#include<stdio.h>
int main(){
	
	int a = 50;
	int b = 50;
	int sum;
	sum = a+b;
	
//	sum = sum + 50; //
	sum += 50;
	printf("addition is : %d\n",sum);
	printf("value for post increment a++ : %d\n",a++);
//	printf("value for a : %d\n",a);
	printf("value for pre incrementa++ : %d\n",++a);
}
