// C Program to illustrate file opening
#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE* anything;
	anything = fopen("testing.txt","r+");
	if(anything == NULL){
		printf("file doesnt exists");
	}else{
		printf("file opened");
	}
	
}
