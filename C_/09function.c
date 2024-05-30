#include<stdio.h>

//int addition(param){ paramter = receiver
int addition(int val1,int val2){
	int sum = val1+val2;
	printf("addition is %d \n",sum);
}

int subtraction(int val1,int val2){
	int sum = val1-val2;
	printf("Subtraction is %d \n",sum);
}
void main(){
//	int a = 50;
//	int b = 50;
//	int sum = a+b;
//	printf("addition is %d",sum);
//	addition(arg); arguement = sender
	addition(50,90);
	addition(125,491);
	addition(175,451);
	addition(25,45);
}
