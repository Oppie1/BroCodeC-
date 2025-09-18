#include<iostream>
using namespace std;

//object = A collection of attributes and methods
//They can have characteristics and could perform actions
//They can be used to mimic real world items (ex. phone, book, dog)
//Objects are created from a class which acts as a blueprint

//Attributes can be version number, a charge a service provider
//Methods are what kind of actions can phone perform? Make and receive calls, play games, ect.
//Attributes of a dog could be name, age,color ect. Methods of a dog/actions are bark, run, walk,sit, ect.


class Human {
public://Everything can access
	//These are attributes 
	string name = "Rick";
	string occupation = "scientist";
	int age = 70;

	string nameM;
	string occupationM;
	int ageM;

	//These are methods humans can take (actions)
	void eat() {
		cout << "This person is eating \n" << endl;
	}

	void drink() {
		cout << "This person is drinking\n" << endl;
	}

	void sleep() {
		cout << "This person is sleeping\n" << endl;
	}
};

class Car {
public:
	string make;
	string model;
	int year;
	string color;

	void accelerate() {
		cout << "You step on the gas!\n";
	}
	void brake() {
		cout << "You step on the breaks!";
	}
};


int main() {

	Human human1; //human1 is an object that has a name, occupation and an age (attributes)
	Human human2;
	Car	  car1;
	Car	  car2;

	human1.name = "Rick";//string in
	human1.occupation = "scientist";
	human1.age = 70;//int in

	cout << human1.name << "\n";
	cout << human1.occupation << '\n';
	cout << human1.age << "\n";

	human1.eat();
	human1.drink();
	human1.sleep();

	human2.nameM = "Morty";//string in
	human2.occupationM = "student";
	human2.ageM = 15;

	cout << human2.nameM << "\n";
	cout << human2.occupationM << '\n';
	cout << human2.ageM << "\n";

	human2.eat();
	human2.drink();
	human2.sleep();

	car1.make = "Ford";
	car1.model = "Mustang";
	car1.year = 2023;
	car1.color = "silver";

	cout << car1.make << endl;
	cout << car1.model << endl;
	cout << car1.year << endl;
	cout << car1.color << endl;

	car1.accelerate();
	car1.brake();
}