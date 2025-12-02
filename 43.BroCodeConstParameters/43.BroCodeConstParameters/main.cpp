#include <iostream>
using namespace std;

//const parameter = parameter that is effectively read-only
//code is more secure & conveys intent
//useful for reference and pointers
void printInfo(const string &name, const int &age);

int main()
{
	string name = "Bro";
	int age = 21;

	printInfo(name, age);
}

void printInfo(const string &name,const int &age) { //const key word says you may not overwrite original variables
	//name = " ";
	//age = 0;
	cout << name << '\n';
	cout << age << '\n';

}
