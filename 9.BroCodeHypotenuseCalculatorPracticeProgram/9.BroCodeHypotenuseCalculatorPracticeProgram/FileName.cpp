#include <iostream>
#include<cmath>
using namespace std;


int main() {

	double a;
	double b;
	double c;

	cout << "Enter side A ";
	cin >> a;

	cout << "\nEnter side B ";
	cin >> b;

	//a = pow(a, 2);
	//b = pow(b, 2);
	c = sqrt(pow(a, 2) + pow(b, 2));

	cout << "side C " << c;
}