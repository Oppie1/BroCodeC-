#include <iostream>
using namespace std;


//dynamic memory = Memory that is allocated after the program
//is already compiled & running
//Use the 'new' operator to allocate
//memory in the heap rather than the stack

//Useful when we dont know how much memory we will need/ Makes our programs more flexible
//especially when accepting user input
int main() {

	char* pGrades = NULL;
	int size;


	cout << "How many grades to enter in?: " << '\n';
	cin >> size;

	pGrades = new char[size];


	for (int i = 0; i < size; i++) {
		cout << "Enter grade #" << i + 1 << ": " << '\n';
		cin >> pGrades[i];
	}

	for (int i = 0; i < size; i++) {
		cout << pGrades[i] << " ";
	}


	return 0;
	

}

/*
int* pNum = NULL;

	pNum = new int;

	*pNum = 21;

	cout << "address: " << pNum << '\n';
	cout << "value: " << *pNum << '\n';

	delete pNum;
*/