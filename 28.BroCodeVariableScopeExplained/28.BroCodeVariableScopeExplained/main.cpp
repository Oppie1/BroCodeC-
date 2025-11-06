#include<iostream>
using namespace std;



void printNum(int myNum2);//global variable

int main()
{
	//Local variables = declared inside a function or block { }
	//Global variables = declared outside of all functions

	int myNum = 1;//local variable

	cout << myNum << endl;

	printNum(myNum);


	return 0;
}
void printNum(int myNum2) {
	
	int myNum = 3;
	cout << myNum;
}