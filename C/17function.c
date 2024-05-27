#include<stdio.h>

int addition(int a, int b){
	return a+b;
}

void main(){
	int funcres = addition(50,90);
	int funcres1 = addition(88,99);
	int funcres2 = addition(56,89);
	int funcres3 = addition(88,88);
	printf("function return is %d %d %d %d",funcres,funcres1,funcres2,funcres3);
}
