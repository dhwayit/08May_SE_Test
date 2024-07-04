// C Program to create a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // file pointer
    FILE* fptr;

	//Data for file 
	char anythingForFile[50] = "Welcome this will added in ur file";

    // creating file using fopen() access mode "w"
//    fptr = fopen("file.txt", "w");
	fptr = fopen("file.txt", "a");

    // checking if the file is created
    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
    else {
        printf("The file is created Successfully.");
        if(strlen(anythingForFile)>0){
//        	printf("inside if");
		fputs(anythingForFile,fptr);
		 fputs("\n", fptr);
		}else{
			printf("inside else");
		}
    }
  
    return 0;
}

