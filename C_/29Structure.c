//The structure in C is a user-defined data type that can be used to group items of possibly different types into a single type. 
//The struct keyword is used to define the structure in the C programming language. 
//The items in the structure are called its member and they can be of any valid data type.

//struct student_data{
//	int x = 0;
//	int y = 0;
//};

struct str1 { 
    int roll_no; 
    char grade; 
    float percentage; 
    char name[30]; 
}; 
void main(){
	struct str1 var1 = {1,'A',89.50,'testing'};
//	printf("printing value of val : %c",var1.grade);
 	printf("Struct 1:i = %d, c = %c, f = %f, s = %s\n",var1.roll_no, var1.grade, var1.percentage, var1.name); 
}
