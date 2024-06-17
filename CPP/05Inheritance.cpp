//
//#include <iostream>
//using namespace std;
//
//class Person {
//    int id;
//    char name[100];
//	public :void set_p(){
//		cout << "Enter value for Id ";
//		cin >> id;
//		cout << "Enter value for name ";
//		cin >> name;
//	}
//	public :void get_p(){
////		cout << "Value for Id is "<< id <<"and value for Name is "<< id;
//		cout << endl <<"Id: "<< id << "\nName: " << name <<endl;
//
//	}
//};
//
//
//
//class Student: private Person{
//    int fees;
//    char course[100];
//	public :void set_s(){
//		set_p();
//		cout << "Enter value for Course ";
//		cin >> course;
//		cout << "Enter value for fees ";
//		cin >> fees;
//	}
//	public :void get_s(){
////		cout << "Value for Id is "<< id <<"and value for Name is "<< id;
//		cout << endl <<"fees: "<< fees << "\nSelected Course is : " << course <<endl;
//
//	}
//};
//
//
//int main(){
//	
//    Student p1; // p1 is a object
//    p1.set_s();
////    p1.get_p();
////	cout << p1.name << endl;
//	return 0;
//}
// Example: define member function without argument outside the class

#include<iostream>
using namespace std;

class Person
{
    int id;
    char name[100];
    
    public:
        void set_p();
        void display_p();
};

void Person::set_p()
{
    cout<<"Enter the Id:";
    cin>>id;
    cout<<"Enter the Name:";
    cin>>name;
}

void Person::display_p()
{
    cout<<endl<<"id: "<< id<<"\nName: "<<name;
}

class Student: private Person
{
    char course[50];
    int fee;
    
    public:
        void set_s();
        void display_s();
};

void Student::set_s()
{
    set_p();
    cout<<"Enter the Course Name:";
    cin>>course;
    cout<<"Enter the Course Fee:";
    cin>>fee;
}

void Student::display_s()
{
    display_p();
    cout<<"\nCourse: "<<course<<"\nFee: "<<fee<<endl;
}

int main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}
