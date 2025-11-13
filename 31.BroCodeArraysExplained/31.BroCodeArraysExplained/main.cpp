#include<iostream>
using namespace std;



//array = a data structure that can hold multiple values
//values are accessed by an index number
//"Kind of like a variable that holds multiple values"

int main()
{

	string car = "Corolla\n";
	cout << car;

	string cars[] = {"Corolla","Mustang", "Corolla"};

	cout << cars[0] << '\n';
	cout << cars[1] << '\n';
	cout << cars[2] << '\n';

	string cars2[3];
	cars2[0] = "Comaro";
	cars2[1] = "Mustang";
	cars2[2] = "Camry";

	cout << cars2[0] << '\n';
	cout << cars2[1] << '\n';
	cout << cars2[2] << '\n';

	double prices[] = { 5.00, 7.50, 9.99, 15.00 };
	
	cout << prices[0] << '\n';
	cout << prices[1] << '\n';
	cout << prices[2] << '\n';
	cout << prices[3] << '\n';
	


}