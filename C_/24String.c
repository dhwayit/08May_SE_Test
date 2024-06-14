//A String in C programming is a sequence of characters terminated with a null character ‘\0’. 
//The C String is stored as an array of characters. The difference between a character array and 
//a C string is that the string in C is terminated with a unique character ‘\0’.

//void main(){
////	char str[40] = "Data";
////
////	printf("Data in str variable before input %s\n",str);
////
////	printf("Enter New Data for updating string\n");
////	scanf("%s",str);
////
////	printf("str Data after input : %s\n",str);
////
////    int length = strlen(str);
//// 
////    // displaying the length of string
////    printf("Length of string str is %d", length);
//  
//  	char str[20];
// 
//    // using scanset in scanf
//    scanf("%[^\n]s", str);
//// 	scanf("%s", str);
// 
//    // printing read string
//    printf("%s", str);
// 
//
//}




//void printStr(char str[]) { printf("String is : %s", str); }
// 
//int main()
//{
//    // declare and initialize string
//    char str[] = "Anything in string";
// 
//    // print string by passing string
//    // to a different function
//    printStr(str);
// 
//    return 0;
//}







void main()
{
 
//    char str[20] = "Data for pointer";
// 
//    // Pointer variable which stores
//    // the starting address of
//    // the character array str
//    char* ptr = str;
// 
//    // While loop will run till 
//    // the character value is not
//    // equal to null character
//    while (*ptr != '\0') {
//        printf("%c", *ptr);
//       
//        // moving pointer to the next character.
//        ptr++;
//    }
 
//   char str1[] = "str1!";
//    char str2[] = "str2";
// 
//    char str3[40];
//    char str4[40];
// 
//    char str5[] = "GfG";
//
//	printf("before strcpy str1 : %s\n",str1);
//	printf("before strcpy str2 : %s\n",str2);
//	printf("before strcpy str3 : %s\n",str3);
//	printf("before strcpy str4 : %s\n",str4);
//	printf("before strcpy str5 : %s\n",str5);
// 
//    // String copy used
//    strcpy(str2, str1);
//    strcpy(str3, "Copy successful");
//    strcpy(str4, str5);
// 
//    // Strings Printed
//	printf("After str cpy str1 : %s\n",str1);
//	printf("After str cpy str2 : %s\n",str2);
//	printf("After str cpy str3 : %s\n",str3);
//	printf("After str cpy str4 : %s\n",str4);
//	printf("After str cpy str5 : %s\n",str5);
//	printf("%s",str2);
	//cout << "str1: " << str1 << "\nstr2: " << str2
//         << "\nstr3: " << str3 << "\nstr4: " << str4;
   
   
   
   
   
   
   
//    char src[50] = "for Dev";
//   char anything1[50] = "developers";
//   char anything2[50] = "developer";
//  
//   printf("Before strcat() function execution, ");
//   printf("anythingination string : %s\n", anything1);
//    
//   // Appends the entire string of src to anything1
//   strcat(anything1, src);
//  
//   // Prints the string
//   printf("After strcat() function execution, ");
//   printf("anythingination string : %s\n", anything1);
//  
//   printf("Before strncat() function execution, ");
//   printf("anythingination string : %s\n", anything2);
//    
//   // Appends 3 characters from src to anything2
//   strncat(anything2, src, 3);
//     
//   // Prints the string
//   printf("After strncat() function execution, ");
//   printf("anythingination string : %s\n", anything2);
//   
   
   
   
   
   
//     char str[ ] = "Hello Developers IS THE BEST"; 
//  
//    // converting the given string into lowercase. 
//    printf("%s\n",strlwr (str)); 
//    printf("%s\n", strupr (str));



 char s1[] = "Developer for";
    char s2[] = "for";
    char* p;
 
    // Find first occurrence of s2 in s1
    p = strstr(s1, s2);
 	
 	printf("String found %s\n ",p);
    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is "
               "'%s'",
               s2, s1, p);
    }
    else
        printf("String not found\n");
  
}
