#include<stdio.h>

void main(){
//	printf("return from function : %d",testing());

//	logic of 1000 line
//	logic of 1000 line
//	logic of 1000 line
//	logic of 1000 line
//	logic of 1000 line = total 5000 line of code without function
//sum(); // one line calling function which is containg 1000 line of code 
//sum(); // one line calling function which is containg 1000 line of code 
//sum(); // one line calling function which is containg 1000 line of code 
//sum(); // one line calling function which is containg 1000 line of code 
//sum(); // one line calling function which is containg 1000 line of code total line of code is near by 1005-1010


printf("return from function : %d\n",sum(78,1328));
printf("return from function : %d\n",sum(78,7448));
printf("return from function : %d\n",sum(78,458));
printf("return from function : %d\n",sum(78,98));

 	int var1 = 3, var2 = 2;
  	printf("Before swap Value of var1 and var2 is: %d, %d\n", var1, var2);
  	swap(&var1, &var2);
  	printf("After swap Value of var1 and var2 is: %d, %d",var1, var2);
  	return 0;
}


/* Defination : A function in C is a set of statements that when called perform some specific task. 
It is the basic building block of a C program that provides modularity and code reusability. 
The programming statements of a function are enclosed within { } braces, having certain meanings 
and performing certain operations. They are also called subroutines or procedures in other languages. */

//Syntax of Functions in C
//The syntax of function can be divided into 3 aspects:
// 1.Function Declaration
// 2.Function Definition
// 3.Function Calls

//Syntax return_type name_of_the_function (parameter_1, parameter_2);


//How Does C Function Work?
//Working of the C function can be broken into the following steps as mentioned below:
//
//Declaring a function: Declaring a function is a step where we declare a function. Here we define the return types and parameters of the function.
//Defining a function: 
//Calling the function: Calling the function is a step where we call the function by passing the arguments in the function.
//Executing the function: Executing the function is a step where we can run all the statements inside the function to get the final result.
//Returning a value: Returning a value is the step where the calculated value after the execution of the function is returned. Exiting the function is the final step where all the allocated memory to the variables, functions, etc is destroyed before giving full control to the main function.
//Types of Functions
//There are two types of functions in C:
//
// 1. Library Functions
// 2. User Defined Functions


//1. Library Function
//A library function is also referred to as a “built-in function”. A compiler package already exists that contains these functions, each of which has a specific meaning and is included in the package. Built-in functions have the advantage of being directly usable without being defined, whereas user-defined functions must be declared and defined before being used. 

//For Example:

//pow(), sqrt(), strcmp(), strcpy() etc.
//Advantages of C library functions
//C Library functions are easy to use and optimized for better performance.
//C library functions save a lot of time i.e, function development time.
//C library functions are convenient as they always work.


//2. User Defined Function
//Functions that the programmer creates are known as User-Defined functions or “tailor-made functions”. User-defined functions can be improved and modified according to the need of the programmer. Whenever we write a function that is case-specific and is not defined in any header file, we need to declare and define our own functions according to the syntax.
//
//Advantages of User-Defined Functions
//Changeable functions can be modified as per need.
//The Code of these functions is reusable in other programs.
//These functions are easy to understand, debug and maintain.


//We can pass arguments to the C function in two ways:
//
//Pass by Value
//Pass by Reference
//1. Pass by Value
//Parameter passing in this method copies values from actual parameters into formal function parameters. As a result, any changes made inside the functions do not reflect in the caller’s parameters. 
int sum(int a, int b){
//	logic of 1000 line
//	int a = 50,b=45;
	int sum = a+b;
	return sum;
}


//2. Pass by Reference
//The caller’s actual parameters and the function’s actual parameters refer to the same locations, so any changes made inside the function are reflected in the caller’s actual parameters. 


void swap(int *var1, int *var2){
	int temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}


//Advantages of Functions in C
//Functions in C is a highly useful feature of C with many advantages as mentioned below:
//
//The function can reduce the repetition of the same statements in the program.
//The function makes code readable by providing modularity to our program.
//There is no fixed number of calling functions it can be called as many times as you want.
//The function reduces the size of the program.
//Once the function is declared you can just use it without thinking about the internal working of the function.
//Disadvantages of Functions in C
//The following are the major disadvantages of functions in C:
//
//Cannot return multiple values.
//Memory and time overhead due to stack frame allocation and transfer of program control.
//Conclusion
//In this article, we discussed the following points about the function as mentioned below:
//
//The function is the block of code that can be reused as many times as we want inside a program.
//To use a function we need to call a function.
//Function declaration includes function_name, return type, and parameters.
//Function definition includes the body of the function.
//The function is of two types user-defined function and library function.
//In function, we can according to two types call by value and call by reference according to the values passed.

