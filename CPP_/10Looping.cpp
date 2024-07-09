//C++ Loop
//In Programming, sometimes there is a need to perform some operation more than once or (say) n number of times. 
//Loops come into use when we need to repeatedly execute a block of statements. 
//For example: Suppose we want to print “Hello World” 10 times. This can be done in two ways as shown below: 



// C++ program to Demonstrate the need of loops
//#include <iostream>
//using namespace std;
// 
//int main()
//{
//    cout << "Hello World\n";
//    cout << "Hello World\n";
//    cout << "Hello World\n";
//    cout << "Hello World\n";
//    cout << "Hello World\n";
//    return 0;
//}


//1.while loop – First checks the condition, then executes the body.
//2.for loop – firstly initializes, then, condition check, execute body, update.
//3.do-while loop – firstly, execute the body then condition check

//Syntax: 
//for (initialization expr; test expr; update expr)
//{    
//     // body of the loop
//     // statements we want to execute
//}
//Example1
//declaration
//int i;
//for(i = 0; i < n; i++)
//{
//    // BODY
//}



//// C++ program to Demonstrate for loop
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i;
//	for(i=0; i<5;i++){
//		cout << "Hello World\n";
//	}
//}


#include <iostream>
using namespace std;

int main() {

//	for (int i = 0, j = 10, k = 20; (i + j + k) < 100; j++, k--, i += k) {
//        cout << i << " " << j << " " << k << "\n";
//   }
//    int i = 99;
//	for (int i=0;i<5;i++){
//		cout<<i<<"\t";
//	}
//	cout<<"\n"<<i;	

//
// 	int i = 99;
//    for (i = 0; i < 5; i++) {
//        cout << i << " ";
//    }
//    cout << "\n" << i;
//
//	return 0;


//  int i = 1;
// 
//    // test expression
//    while (i < 6) {
//        cout << "Hello World\n";
// 
//        // update expression
//        i++;
//    }
// 
//    return 0;
	int i = 2; // Initialization expression
    do {
        // loop body
        cout << "Hello World\n";
 
        // update expression
        i++;
 
    } while (i < 1); // test expression
 return 0;
}


