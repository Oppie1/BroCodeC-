#include <iostream>
using namespace std;


//pointers = variable that stores a memory address of another variable
//Sometimes it's easier to work with an address

//& address-of operator
//*dereference operator

int main() {

	string name = "Bro";
	int age = 21;
	string freePizzas[5] = { "pizza1","pizza2" ,"pizza3" ,"pizza4" ,"pizza5" };

	string *pName = &name;
	int* pAge = &age;
	string* pFreePizzas = freePizzas;

	cout << *pName << endl;
	cout << *pAge <<'\n';
	cout << *pFreePizzas << '\n';
}