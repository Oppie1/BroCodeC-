#include<iostream>
using namespace std;

//function = block of reusable code.

void happyBirthday(string name, int age);

int main()
{
	string name = "Claudia";
	int age = 44;
	
	happyBirthday(name, age);
	

}

void happyBirthday(string name, int age) {
	cout << "Happy Birthday to " << name << '\n';
	cout << "Happy Birthday to " << name << '\n';
	cout << "Happy Birthday to " << name << '\n';
	cout << "Happy Birthday to " << name << '\n';
	cout << "You are " << age << " years old"<<'\n';

}