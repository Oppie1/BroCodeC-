#include <iostream>
using namespace std;


void swap(string &x, string &y);

int main() {

	string x = "Kool-Aid";
	string y = "Water";
	

	swap(x, y);

	cout << " X: " << &x << '\n';
	cout << " Y: " << &y << '\n';

}

void swap(string &x, string &y) {
	
	cout << " X: " << &x << '\n';
	cout << " Y: " << &y << '\n';
	
	//string temp;

	//temp = x;
	//x = y;
	//y = temp;

}