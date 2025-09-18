#include<iostream>
using namespace std;

int main() {
	//The const keyword specifies that a variable's value is constant. Tells compiler to prevent anything from modifying it
	//(read-only). Cant be change. Use constants as offten as possible but only if you're certain variable will not be changed

	const double PI = 3.14259; //Common practice for const variables is to change them from lower case to all upercase
	//PI = 420.69 would give us an error message.
	const int LIGHT_SPEED = 299792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080;
	double radius = 10;
	double circumference = 2 * PI * radius;

	cout << circumference << "cm\n";
	cout << "Speed of light is: " << LIGHT_SPEED << endl;

}
