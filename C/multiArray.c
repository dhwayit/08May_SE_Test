#include <stdio.h>
int main() {

	int i,a[3][3] = { {1, 2, 3}, {11, 22, 33}, {111, 222, 333}};
//	printf("Sum = %d\n", a[0][0]);
//	printf("Sum = %d\n", a[0][1]);
	for(i=0;i<3;i++){
		printf("Marks %d\n",a[0][i]);
		printf("Marks %d\n",a[1][i]);
		printf("Marks %d\n",a[2][i]);
	}
}
