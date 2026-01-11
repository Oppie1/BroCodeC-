#include <iostream>
using namespace std;


//struct = A structure that group related variables under one name
//structs can contain many different data types (string, int, double, ect)
//variables in a struct are know as "members"
//members can be accessed with . dot "Class Member Access Operator"

struct student {
	string name;
	double gpa;
	bool enrolled;
	//bool enrolled = true; if done this way do not have to explicitly state that in main. Can just go to cout statement with 
	//. dot Member Access Operator
};

int main() {

	student student1;
	student1.name = "Spongebob";
	student1.gpa = 3.2;
	student1.enrolled = true; //true = 1 -- 0 = false

	cout << student1.name << '\n';
	cout << student1.gpa << '\n';
	cout << student1.enrolled << '\n';

	student student2;
	student2.name = "Patrick";
	student2.gpa = 2.1;
	student2.enrolled = true; //true = 1 -- 0 = false

	cout << student2.name << '\n';
	cout << student2.gpa << '\n';
	cout << student1.enrolled << '\n';

	student student3;
	student3.name = "Squidward";
	student3.gpa = 1.5;
	student3.enrolled = false; //true = 1 -- 0 = false

	cout << student3.name << '\n';
	cout << student3.gpa << '\n';
	cout << student3.enrolled << '\n';
	
}