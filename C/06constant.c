#include<stdio.h>
void main(){
	printf("Hello");
	const int myNum = 15;  // myNum will always be 15
	myNum = 10;  // error: assignment of read-only variable 'myNum'
}
