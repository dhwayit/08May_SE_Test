#include<stdio.h>
void main(){
	
/*	Array in C is one of the most used data structures in C programming. 
	It is a simple and fast way of storing multiple values under a single name. 
	In this article, we will study the different aspects of array in C language such as 
		array declaration, 
		definition, 
		initialization, 
		types of arrays, 
		array syntax, 
		advantages and disadvantages */	
//  What is Array in C?
//		An array in C is a fixed-size collection of similar data items stored in contiguous memory locations. It can be used to store the collection of primitive data types such as int, char, float, etc., and also derived and user-defined data types such as pointers, structures, etc.	

//int array_data[5];
	int array_data[5] = {1,4,5,78,7,7,7,7};
	int i;
	array_data[2] = 45;
	printf("data %d\n",array_data[0]);
	printf("data %d\n",array_data[8]);
	for(i=0;i<5;i++){
		printf("data %d \n",array_data[i]);
	}
	
	char arr[6] = { 'D', 'H', 'w', 'a', 'y', '\0' };
 
    // printing string
    int arrayi = 0;
    
	printf("Array Value of 0 index %C\n",arr[0]);
	printf("Array Value of 1 index %C\n",arr[1]);    
	printf("Array Value of 2 index %C\n",arr[2]);
	printf("Array Value of 3 index %C\n",arr[3]);
	printf("Array Value of 4 index %C\n",arr[4]);
	
    
	while (arr[arrayi]) {
        printf("%c", arr[arrayi++]);
    }


    int arr2d[2][3] = { 10, 20, 30, 40, 50, 60 };
	int ai,j;
	printf("2D Array:\n");
	
	printf("2D Array:%d\n",arr2d[0][0]);
    // printing 2d array
    for (ai = 0; ai < 2; ai++) {
        for (j = 0; j < 3; j++) {
            printf("%d ",arr2d[ai][j]);
        }
        printf("\n");
    }
 



	
	
}
