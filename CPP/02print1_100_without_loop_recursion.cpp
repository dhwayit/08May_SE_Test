//// CPP Program to print 1 to 100
//// without loops and recursion
//#include <iostream>
//using namespace std;
//
//template <int N> class PrintOneToN {
//public:
//	static void print()
//	{
//		PrintOneToN<N - 1>::print();
//	
//		// Note that this is not recursion
//		cout << N << endl;
//	}
//};
//
//template <> class PrintOneToN<1> {
//public:
//	static void print() { cout << 1 << endl; }
//};
//
//// Driver Code
//int main()
//{
//	const int N = 100;
//	PrintOneToN<N>::print();
//	return 0;
//}


#include<stdio.h>
int main()
{
   int n;
   for (n = 9; n!=0; n--){
     printf("\n = %d\", n--);
   }
   return 0;
}




