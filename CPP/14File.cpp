#include <iostream>
#include <fstream>
using namespace std;
int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");
  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough! this will be added";
  // Close the file
  MyFile.close();
  string myText;
  ifstream MyReadFile("filename.txt");
	// Use a while loop together with the getline() function to read the file line by line
	while (getline (MyReadFile, myText)) {
	  // Output the text from the file
  		cout << myText;
	}
	// Close the file
	MyReadFile.close();

}
