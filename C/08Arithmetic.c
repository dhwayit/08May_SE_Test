#include <stdio.h>
void main() {

int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400)


int x = 10;
x += 5; // x = x+5;
printf("value of x is %d \n",x);
printf("value of x++ is %d \n",x++);
printf("value of x is %d \n",x);
printf("value of ++x is %d \n",++x);
}
