#include<iostream>
using namespace std;

	//constructors - A constructor is a special method within a class that is automatically called when an
	//object is instantiated. Its useful for assigning values to attributes as arguments.
	//There is a constructor that is automatically called behind the scenes. Can also call one explisitly
	//The constructor has the same name as the class.

	class Student {
	public:
		string name;
		int age;
		double gpa;

		Student(string x, int y,double z) { //You can think of this like a function. We can set parameters.
			name = x;
			age = y;
			gpa = z;

		}
	};

	class Car {
	public:
		string make;
		string model;
		int year;
		string color;

		Car(string a, string b, int c, string d){
			make = a;
			model = b;
			year = c;
			color = d;

		}
			
			
	};

	int main() {

		Student student1("Spongebob", 25, 3.2);
		Student student2("Patrick", 40, 1.5);
		Student student3("Sandy", 21, 4.0);
		Car car1("Chevy", "Corvette", 2022, "blue");
		Car car2("Ford", "Mustang", 2020, "red");

		cout << student1.name << endl;
		cout << student1.age << endl;
		cout << student1.gpa << endl;

		cout << student2.name << endl;
		cout << student2.age << endl;
		cout << student2.gpa << endl;

		cout << student3.name << endl;
		cout << student3.age << endl;
		cout << student3.gpa << endl;

		cout << car1.make << endl;
		cout << car1.model << endl;
		cout << car1.year << endl;
		cout << car1.color << endl;

		cout << car2.make << endl;
		cout << car2.model << endl;
		cout << car2.year << endl;
		cout << car2.color << endl;


		return 0;
	}