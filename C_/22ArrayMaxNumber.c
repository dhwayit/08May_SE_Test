#include<stdio.h>

//getMax(Paramter){
int getMax(int arrayVal[]){
	int i;
//	printf("function response = %d",sizeof(arrayVal));
//  int length = sizeof(arrayVal) / sizeof(arrayVal[0]);
//  printf("function response = %d",length);
//	for(i=0;i<=10;i++){
    int max = arrayVal[0];

	for(i=0;i<10;i++){
//		printf("array loop  %d : %d \n",i,arrayVal[i]);
		printf("inside array loop %d : \n",arrayVal[i]);
		if (max < arrayVal[i]) {
			printf("\t inside loop condition max is : %d and array index is : %d \n",max,arrayVal[i]);
            max = arrayVal[i];
        }
	}
	
	return 45;
}

void main(){
	
	int arr[]	= { 135, 165, 1, 16, 511, 65, 654, 654, 169, 4 };
	int response;
	response = getMax(arr);
//	printf("function response = %d",length);
}
