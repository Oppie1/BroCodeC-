#include<iostream>
using namespace std;


int main() {

	//sizeof() = determines the size in bytes of a:
	//variable, data type, class, objects,etc.


	string name = "Bro code";
	double gpa = 2.5;
	char grade = 'F';
	bool student = true;
	char grades[] = { 'A', 'B', 'C', 'D','F' };
	char grades2[] = { 'A', 'B', 'C', 'D','E','F' };
	string students[] = { "Spongebob","Patrick","Squidward" };
	string students2[] = { "Spongebob","Patrick","Squidward", "Sandy"};

	cout << sizeof(gpa) << " bytes\n";
	cout << sizeof(double) << " bytes\n";
	cout << sizeof(name) << " bytes\n";
	cout << sizeof(grade) << " bytes\n";
	cout << sizeof(student) << " bytes\n";
	cout << sizeof(grades) << " bytes\n";

	cout << sizeof(grades) / sizeof(char) << " elements\n";
	cout << sizeof(grades2) / sizeof(char) << " elements\n";
	cout << sizeof(students) / sizeof(string) << " elements\n";
	cout << sizeof(students2) / sizeof(string) << " elements\n";

}