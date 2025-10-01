#include<iostream>
using namespace std;


int main() {
	//&& = check if two conditions are true
	//| = check if at least one of two conditions is true
	//! = reverses the logical state of its operand
	
	int temp;
	int temp2;
	bool sunny = true;

	cout << "Enter the temperature: ";
	cin >> temp;

	if (temp > 0 && temp < 30) {
		cout << "The temerature is good " << endl;
	}
	else {
		cout << "The temperature is bad \n";
	}

	cout << "Enter the temperature 2: ";
	cin >> temp2;

	if (temp2 <= 0 || temp2 >= 30) {
		cout << "The temerature is bad " << endl;
	}
	else {
		cout << "The temperature is good \n";
	}

	if (sunny) {//Same as(sunny==true)
		cout << "It is sunny outside!\n";
	}
	else {
		cout << "It is cloudy outside! " << endl;
	}

	if (!sunny) {//Same as(sunny==true)
		cout << "It is sunny outside!\n";
	}
	else {
		cout << "It is cloudy outside! " << endl;
	}
}