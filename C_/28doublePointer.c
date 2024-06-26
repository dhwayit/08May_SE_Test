#include<stdio.h>
void main(){
	int val = 5;
	printf("printing value of val : %d",val);
	int *pointer_val = &val;
	printf("\nprinting value of pointer_val : %d",pointer_val );
	int **double_pointer_val = &pointer_val;
	printf("\nprinting value of double_pointer_val  : %d",double_pointer_val);
}
