
#include <iostream>
using namespace std;

class Person {
    int id;
    char name[100];
	public :void set_p(){
		cout << "Enter value for Id";
		cin >> id;
		cout << "Enter value for name";
		cin >> name;
	}
	public :void get_p(){
		cout << "Enter value for Id"<< id;
	}
}


int main(){
	
    Person p1; // p1 is a object
    p1.set_p();
//	cout << p1.name << endl;
	return 0;
}
