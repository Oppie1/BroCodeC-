#include<iostream>
#include<string>
using namespace std;


int main()
{
	string name;
	
	cout << "Enter your name:\n";
	getline(cin, name);

	if (name.length() > 12) {
		cout << "\nYour name cannot be over 12 characters long ";
	}

	else {
		cout <<"\nWelcome " << name;
	}

	cout << "\n\nEnter your name example number 2\n";
	getline(cin, name);
	
	if (name.empty()) {
		cout << "You didnt enter your name\n";
	}

	else {
		cout <<"\nHello " << name;
	}
	
	cout << "\n\nEnter your name example number 3\n";
	getline(cin, name);

	name.clear();
	cout <<"Hello " << name;


	cout << "\n\nEnter your name example number 4\n";
	getline(cin, name);

	name.append("@gmail.com");

	cout << "Your username is now " << name;

	cout << "\n\nEnter your name example number 5\n";
	getline(cin, name);

	cout << name.at(1); 

	cout << "\n\nEnter your name example number 6\n";
	getline(cin, name);

	name.insert(0,"@");
	cout << name;

	cout << "\n\nEnter your name example number 7\n";
	getline(cin, name);

	cout<<name.find(' ');

	cout << "\n\nEnter your name example number 8\n";
	getline(cin, name);

	name.erase(0, 3);
	cout << name;

	






}