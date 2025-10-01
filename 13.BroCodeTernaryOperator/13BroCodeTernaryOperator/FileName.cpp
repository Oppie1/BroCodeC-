#include<iostream>
using namespace std;

int main()
{
	//ternary operator = ?: ->replacement for if else statement
	//condition ?(if) expression 1 --> do this. :(else) expresion2-->do that;

	int grade = 51;
	grade >= 60 ? cout << "You pass!" : cout << "You Fail!" << endl;

	int number = 8;
	number % 2 ? cout << "ODD" : cout << "EVEN" << endl;

	bool hungry = false;

	hungry ? cout << "You are hungry" : cout << "You are full" << endl;
	cout << (hungry ? "You are hungry " : "You are full"); 
	
}