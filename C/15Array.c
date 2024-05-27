#include<stdio.h>
void main(){
//	Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
//To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
//array always starts with 0 index 
//	int a = 50, b = 55, c = 67 ,i;
//	float avg = (float)(a + b + c) / 10;
//	printf("Average is : %f\n",avg);
	int marks[10] = {50, 55, 67, 73, 45, 21, 39, 70, 49, 51};
	int sum=0,i;
//	printf("0 index data is: %d\n",marks[0]);
//	printf("1 index data is: %d\n",marks[1]);
//	printf("2 index data is: %d\n",marks[2]);
//	printf("9 index data is: %d\n",marks[9]);
//	for(init;condition;proess)
	int arr[] = {50, 67.55, "hello", 21};

		int num[10] = {50, 55, 67, 73, 45, 21, 39, 70, 49, 51};
	    int size = sizeof(num) / sizeof(int);
	    printf("element at lower bound num[0]: %d at upper bound: %d Size of array: %d", num[0], num[size-1], size);
   
   
	printf("Size of arr : %d\n",sizeof(arr));
//	for(i=0;i<10;i++)
	for(i=0;i<10;i++){
//		printf("Marks %d\n",marks[i]);
		sum+=marks[i];
	}
	printf("Sum %d\n",sum);
	
}

