#include
int x = 50 // Global Variable
sum(int a,int b){ // declaring function with parameter
	return a+b;
//	return a+2;
//	return 2+2
}
main(){
	int a =50; // local scope variable
	sum(50,60); //calling function with arguments
}

