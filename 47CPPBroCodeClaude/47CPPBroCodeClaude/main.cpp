#include <iostream>
using namespace std;


//Null pointers - What are they
//Think of  a pointer as an address that tells you where something is stored in your computers memory
//Sometimes, we want to create a pointer that doesnt point to anything yer- this is called a null pointer
//It's like having an empty address field on a form

//The keyword nullptr is how we write a null pointer in  C++
//It's a special word that means this pointer isnt pointing to any memory location right now

//Why is this useful
//WE can check if a pointer has been fiven a vaild address or if it's still empty
//This helps prevent errors in our programs

//Important safety tip
//Never try to use (dereference) a pointer that is nullptr or points to memory that's been freed
//This will crash your program or cause weird unprdicatable bugs


int main()
{
	int* pointer = nullptr;//Start with an empty pointer (not pointing to anything)

	int x = 123;//Create a regular integer variable

	pointer = &x;//Now make the pointer hold the address of x

	//Check if the pointer actually got an address
	if (pointer == nullptr) {

		cout << "address was not assigned! \n";
	}
	else {
		cout << "address was assigned ";
		cout << *pointer;//Print the value that the pointer is pointing to
	}
}