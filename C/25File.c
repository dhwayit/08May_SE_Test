
// File handing in C is the process in which we create, open, read, write, and close operations on a file. 
// C language provides different functions such as fopen(), fwrite(), fread(), fseek(), fprintf(), etc. 
// to perform input, output, and many different C file operations in our program.

// Why do we need File Handling in C?

//Reusability: The data stored in the file can be accessed, updated, and deleted anywhere and anytime providing high reusability.
//Portability: Without losing any data, files can be transferred to another in the computer system. The risk of flawed coding is minimized with this feature.
//Efficient: A large amount of input may be required for some programs. File handling allows you to easily access a part of a file using few instructions which saves a lot of time and reduces the chance of errors.
//Storage Capacity: Files allow you to store a large amount of data without having to worry about storing everything simultaneously in a program.

//Text Files
//Binary Files

//C File Operations
//C file operations refer to the different possible operations that we can perform on a file in C such as:
//
//Creating a new file – fopen() with attributes as “a” or “a+” or “w” or “w+”
//Opening an existing file – fopen()
//Reading from file – fscanf() or fgets()
//Writing to a file – fprintf() or fputs()
//Moving to a specific location in a file – fseek(), rewind()
//Closing a file – fclose()



// C Program to illustrate file opening
#include <stdio.h>
#include <stdlib.h>
void main(){


    // file pointer variable to store the value returned by
    // fopen
    FILE* filePointer;
//	fptr = fopen("test.txt", "r");
 	char dataToBeWritten[50] = "DHway IT Career";
//	 fptr = fopen("testingchecking.txt", "w");
    filePointer = fopen("newfile.txt", "w");

 	if (filePointer == NULL) {
        printf("GfgTest.c file failed to open.");
    }
    else {
    	printf("The file is now opened.\n");
		printf("%d",strlen(dataToBeWritten) );
		if (strlen(dataToBeWritten) > 0) {
			fputs(dataToBeWritten, filePointer); //fputs(Data, FileContent);
//            fputs("\n", filePointer);

		}
		fclose(filePointer);
 
        printf("Data successfully written in file "
               "GfgTest.c\n");
        printf("The file is now closed.");

	}
}



























