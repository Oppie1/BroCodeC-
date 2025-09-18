#include<iostream>
using namespace std;

int main() {

	int y = 6;
	int x; //declaration
	x = 5;//assignment
	int sum = x + y;
	int age = 21;
	int year = 2023;
	double days = 7.5;//double is variable with a decimal. 
	double price = 10.99;
	double gpa = 2.5;
	double temperature = 25.1;
	char grade = 'A'; //To stroe a single character
	char initial = 'B';
	char currency = '$';
	//boolean (true or false)-like a light switch is either on or off. '0' = flase '1' = true
	bool student = true;//= 1
	bool power = true;//= 1
	bool forSale = false; // = 0

	//string (object that represents a sequence of text). Like char but can store a name, address ect.
	string name = "Bro";
	string day = "Friday";
	string food = "Pizza";
	string address = "123 Fake street";
	//Important note about strings is that you can include numbers but they are treated differently.




	cout << x << endl;
	cout << y << endl;
	cout << sum << endl;
	cout << age << endl;
	cout << year << "\n" << endl;
	
	cout << days << endl;
	cout << price << endl;
	cout << gpa << endl;
	cout << temperature << "\n" << endl;

	cout << grade << endl;
	cout << initial << endl;
	cout << currency <<"\n"<< endl;

	cout << student << endl;
	cout << power << endl;
	cout << forSale << "\n" << endl;

	cout << name << endl;
	cout << day << endl;
	cout << food << endl;
	cout << address << "\n" << endl;

	cout << "Hello " << name << endl; //"Hello" like this is a string literal. //Spacing is important
	cout << "You are " << age << " years old" << endl;
}