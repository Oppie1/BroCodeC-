#include <iostream>
using namespace std;

//Inheritance = A class can receive attributes and methods from another class
	//Children classes inherit from a Parent class
	//Helps to reuse similar code found within multiple classes

class Animal {

public:
	bool alive = true;
	
	void eat() {
		cout << "This animal is eating\n";
	}

	
};

class Dog : public Animal {

public:
	void bark() {
		cout << "The dog goes woof!\n";
	}
};

class Cat : public Animal {

public:
	void meow() {
		cout << "The cat goes meow! \n";
	}
};

int mainAnimals() {//Changed from "main(){  } so that other file "main2Shape.cpp" ran (had to label the entry point "main"
	//I also had to change the name in the "solution explorer" source file to "mainAnimals" to get it to work as intended. 

	Dog dog;


	cout << dog.alive << '\n';
	dog.eat();
	dog.bark();

	Cat cat;
	cout << cat.alive << '\n';
	cat.eat();
	cat.meow();
	
	return 0;

}