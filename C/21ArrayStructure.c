// C program to demonstrate the array of structures 
#include <stdio.h> 
  
// structure template 
struct Employee { 
    char Name[20]; 
    int employeeID; 
    int WeekAttendence[7]; 
}; 
  
// driver code 
int main() { 
    struct Employee emp[5]; 
	int i;
	int attendence; 
    int week; 
	for(i=0;i<5;i++){
//		printf("inside loop %d \n",i);
		emp[i].employeeID = i;
		strcpy(emp[i].Name, "Amit"); 
		for (week = 0; week < 7; week++) { 
            emp[i].WeekAttendence[week] = week; 
        } 
	}	
	for (i = 0; i < 5; i++) { 
        printf("Emplyee ID: %d - Employee Name: %s\n", emp[i].employeeID, emp[i].Name); 
        printf("Attendence\n"); 
        for (week = 0; week < 7; week++) { 
            printf("%d ", emp[i].WeekAttendence[week]); 
        } 
        printf("\n"); 
    } 
  
}
