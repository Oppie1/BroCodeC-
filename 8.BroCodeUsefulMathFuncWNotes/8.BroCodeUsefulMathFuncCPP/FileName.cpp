#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double x = 3;
	double y = 4;
	double a;
	double b;
	double z;
	double c = 3.14;
	double d = 3.14;
	double e = 3.99;

	z = max(x, y);//This line just compares 3 and 4 to determine which is larger

	cout << z << endl;//So 4 is larger

	z = min(x, y);//This line compares 3 and 4 to see which is smaller
	cout << z << endl;

	y = pow(2, 3);//The cmath library above gives us the pow function so here we are raising 2 to the power of 3 which is 8.
	x = pow(2, 4);
		cout << y << endl;
		cout << x << endl;

		a = sqrt(9);//This gives use the square root function
		cout << a << endl;//So square root of 9 = 3.

		b = abs(-7);//So here abs means absolute value so if it's negative it is turned to positive.
		cout << b << endl;

		c = round(c);//So round function rounds value up or down to nearest whole number
		cout << c << endl;

		d = ceil(d); //So here we round up no matter what. The ceiling...
		cout << d << endl;

		e = floor(e);//Here we round down no matter what.  The floor...
		cout << e << endl;

	return 0;
}

//Definitions of the library cmath functions
//https://www.cplusplus.com/reference/math/
//Can search all libraies like this to see if there are shortcuts available