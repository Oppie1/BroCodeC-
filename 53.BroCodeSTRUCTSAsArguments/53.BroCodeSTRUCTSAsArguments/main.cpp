#include<iostream>
#include<string>
using namespace std;



struct Car {
	string model;
	int year;
	string color;
};

void printCar(Car &car);
void paintCar(Car &car, string color);

int main() {
	Car car1;
	Car car2;


	car1.model = "Corvette";
	car1.year = 2024;
	car1.color = "blue";


	car2.model = "Mustang";
	car2.year = 2023;
	car2.color = "red";


	paintCar(car1, "silver");
	paintCar(car2, "black");
	//cout << &car1 << '\n';
	printCar(car1);

	//cout << &car2 << '\n';
	printCar(car2);

}

void printCar(Car &car) {
	cout << &car << '\n';
	cout << car.model << endl;
	cout << car.year << '\n';
	cout << car.color << '\n';
}

void paintCar(Car &car, string color) {
	car.color = color;
}

