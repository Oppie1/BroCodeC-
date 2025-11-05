#include<iostream>
using namespace std;


double square(double length);
double cube(double length);

string concatStrings(string string1, string string2);

int main() {

	//return = return a value back to the spot where you called the encompassing funtion

	double length = 5.0;
	double area = square(length);
	double volume = cube(length);
	
	string firstName = "Adam";
	string lastName = "Tindall";
	string fullName = concatStrings(firstName, lastName);

	cout << "Hello " << fullName << endl;

	cout << "Area: " << area << " cm^2\n";
	cout << "Volume: " << volume << " cm^3\n";

	return 0;
}


double square(double length) {

	return length * length;
}

	double cube(double length) {

	return length * length*length;
}

	string concatStrings(string string1, string string2) {
		return string1+ "  " + string2;
	}