#include<iostream>
using namespace std;

int main() {

	double temp;
	char unit;

	cout << "******Temperature Conversion****** " << endl;

	cout << "F = Fahrenheit\n";
	cout << "C= Celsius\n";

	cout << "What would you like to convert to?\n";
	cin >> unit;

	if (unit == 'F' || unit == 'f') {
		cout << "Enter the temperature in Celsius: \n";
		cin >> temp;

		temp = (1.8 * temp) + 32.0;
		cout << "Temperature is: " << temp << " F\n";
	}
	else if (unit == 'C' || unit == 'c') {

		cout << "Enter the temperature in Fahrenheit:\n";
		cin >> temp;
		temp = (temp - 32) / 1.8;
		cout << "Temperature is: " << temp << " C\n";
	}
	else {
		cout << "Please only enter in C or F\n";
	}

	cout << "******Program Ends******" << endl;
}