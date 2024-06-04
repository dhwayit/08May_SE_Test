// C program to illustrate the scope of a variable
#include <stdio.h>
int global = 5;

int main(){
//	recursivefuncforfact(5);
	int n;
	printf("Enter number for find a factorial : ");
	scanf("%d",&n);
	printf("Factorial of %d", recursivefuncforfact(n));
	return 0;
}

// function where we try to access the var defined in main()
int recursivefuncforfact(int a) { 
//	printf("called");
	if(a>1){
		return a*recursivefuncforfact(a-1);
	}else{
		return 1;		
	}
}



