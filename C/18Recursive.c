#include<stdio.h>
void main(){
	int res ;
	res = multiplyNumbers(5);
	printf("this is the return : %d\n",res);
//	printf("after function calling\n");
}
int multiplyNumbers(int n) {
//	printf("inside function %d\n",n);	
	if(n>=1){
		return n*multiplyNumbers(n-1);
	}else{
		return 1;
	}
//	return 12;
}
