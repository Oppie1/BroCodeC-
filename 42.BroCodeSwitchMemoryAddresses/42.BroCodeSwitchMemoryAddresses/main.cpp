#include <iostream>
using namespace std;
int main() {

	//Memory address = a location in memory where data is stored
	//a memory address can be accessed with & (address-of opertor)

	string name = "Bro";//Char take up 1 bytes of data
	int age = 21;//integers take up 4 bytes
	bool student = true; //bool takes up 1 byte of memory
	//double or long take up 8 bytes of memory
	
	cout << &name << '\n';
	cout << &age << '\n';
	cout << &student << '\n';
}