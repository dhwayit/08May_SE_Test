// defining the constructor within the class
#include <iostream>
using namespace std;
class student {
	int rno;
    char name[50];
    double fee;
	public:student(){
		
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
		cout << endl << "constructor";
//		return 5;
	}
	public:int display(){
        cout << endl << "testing";
    	return 45;
	}
};
int main()
{
    student s; 
    s.display();
    return 0;
}
