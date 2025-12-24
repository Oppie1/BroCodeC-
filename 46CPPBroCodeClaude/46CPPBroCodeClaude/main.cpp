#include <iostream>
using namespace std;

//Pointers: A beginer's guide
//Pointer = a variable that stores a memory address of another variable
//Think of it like storing someone's house address instead of the actual house
// 
// Why use pointers?
// The let you work with large data efficiently (pass address instead of copying data)
//
//Two key operators:
//& = "address of" operator (gets the memory address of a variable
//* = dereference operator (goes to an address and gets the value stored there)


int main() {
	
	//Step 1: Create regular variables
	string name = "Bro";
	int age = 21;
	string freePizzas[5] = { "pizza1","pizza2","pizza3","pizza4", "pizza5" };

	//Step 2: Create pointers that store addresses
	//The & operator gets the address where the variable is stored in memory

	string *pName = &name;//pName stores the address of the name variable
	int* pAge = &age;//pAge stores the address of the age variable
	string* pFreePizzas = freePizzas;//Array names are already addresses, so no & needed!
	
	//Note: The * in the declaration (string*) means "this is a pointer"
	//It's different from the * used for dereferencing below


	//Step 3: Use pointers to access the values
	//The * operator (dereference) says: "Go to this address and get value"

	cout << *pName << endl;//*pName = Bro (goes to address, gets the string)
	cout << *pAge << '\n';//*pAge = 21 (goes to address, gets the integer)
	cout << *pFreePizzas << '\n';//* pFreePizzas = "pizza1" (first element of array)
}

//Quick recap:
//pName = the memory address (like 123 main st)
//*pName = the actual value at theat address (like "Whats inside the house"
//&name = give me the address of the name variable