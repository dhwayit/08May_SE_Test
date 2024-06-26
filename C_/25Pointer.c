// C Program to find the size of different pointers types
#include <stdio.h>

// dummy structure
struct str {
};

// dummy function
void func(int a, int b){};

void main(){
	
	
//	int var = 10;
//	int * ptr;
//	ptr = &var;
//	printf("variable value %d",var);
//	printf("Pointer value %d",ptr);
  int a = 10;
    char c = 'G';
    struct str x;

    // pointer definitions of different types
    int* ptr_int = &a; // this ptr_int will contain ponter value of int a
    char* ptr_char = &c; // assigning char c pointer value to ptr_char
    struct str* ptr_str = &x;
    void (*ptr_func)(int, int) = &func;
    void* ptr_vn = NULL;

    // printing sizes
    printf("Size of Integer Pointer  \t:\t%d bytes\n",
           sizeof(ptr_int));
    printf("Size of Character Pointer\t:\t%d bytes\n",
           sizeof(ptr_char));
    printf("Size of Structure Pointer\t:\t%d bytes\n",
           sizeof(ptr_str));
    printf("Size of Function Pointer\t:\t%d bytes\n",
           sizeof(ptr_func));
    printf("Size of NULL Void Pointer\t:\t%d bytes",
           sizeof(ptr_vn));


  printf("\nInteger Pointer  \t:\t%d bytes\n",
           ptr_int);
    printf("Character Pointer\t:\t%d bytes\n",
           ptr_char);
    printf("Structure Pointer\t:\t%d bytes\n",
           ptr_str);
    printf("Function Pointer\t:\t%d bytes\n",
           ptr_func);
    printf("NULL Void Pointer\t:\t%d bytes",
           ptr_vn);


}

//1. Integer Pointers int *ptr;
//2. Array Pointer char *ptr = &array_name;
//3. Structure Pointer struct struct_name *ptr;
//4. Function Pointers int (*ptr)(int, char);
//5. Double Pointers datatype ** pointer_name;
//6. NULL Pointer data_type *pointer_name = NULL;
//7. Void Pointer
//8. Wild Pointers int *ptr; char *str;
//9. Constant Pointers data_type * const pointer_name;
//10. Pointer to Constant const data_type * pointer_name;





