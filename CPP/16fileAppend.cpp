// C++ program to demonstrate appending of
// a string using fstream
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	fstream f;
	f.open("filename.txt", ios::app);
//	if (!f){
//		cout << "No such file found";
//	}else {
		f << " String_fstream";
		cout << "Data appended successfully\n";
		f.close();
		string word;
		f.open("filename.txt");
		while (f >> word) {
			cout << word << " ";
		}
		f.close();
//	}
	return 0;
}

