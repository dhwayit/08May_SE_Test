#include<stdio.h>
void main(){
//int a = 50 , b=60, c=50;
	
	//	Simple if condition works only for the true block START 
//	if(a>b){
//		printf("yes");
//	}
	//	Simple if condition works only for the true block END
	
	
	//	if...else condition works for the true and false block too START 
//	if(a>b){
//		printf("yes");
//	}else{
//		printf("inside else");
//	}
	//	if...else condition works for the true and false block too END

// 	largest among 3 by nested if else START
// 	int A, B, C;
// 
//    printf("Enter three numbers: ");
//    scanf("%d %d %d", &A, &B, &C);
// 
//    if (A >= B) {
//        if (A >= C)
//            printf("%d is the largest number.", A);
//        else
//            printf("%d is the largest number.", C);
//    }
//    else {
//        if (B >= C)
//            printf("%d is the largest number.", B);
//        else
//            printf("%d is the largest number.", C);
//    }
 // 	largest among 3 by nested if else END
 
 
 
 
// 	largest among 3 by if && else START
  int A, B, C;
 
    printf("Enter the numbers A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);
 
    // finding max using compound expressions
    if (A >= B && A >= C)
        printf("%d is the largest number.", A);
 
    else if (B >= A && B >= C)
        printf("%d is the largest number.", B);
 
    else
        printf("%d is the largest number.", C);

// 	largest among 3 by if && else END 
 
}

