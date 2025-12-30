#include <iostream>
using namespace std;


//function template = describes what a function looks like.
//Can be used to generate as many overloaded functions as needed, each using different data types
//It's like a cookie-cutter. Cookies are the same shape, but the dough may be different

template <typename T, typename U>
auto maximum(T x, U y) {
	return (x > y ? x : y);
}



int main() {

	cout << maximum(23, 27.4)<<'\n';

}


/*
* 
* -----------------------------------------------------------------
* template <typename T, typename U>
U maximum(T x, U y) {
	return (x > y ? x : y);
}



int main() {

	cout << maximum(29, 27.4)<<'\n';

}
* template <typename T>
T maximum(T x, T y) {
	return (x > y ? x : y);
}



int main() {

	cout << maximum(21.3, 27.4)<<'\n';

}
* ------------------------------------------------------------

int max(int x, int y) {
	return (x > y ? x : y);
}

double max(double x, double y) {
	return (x > y ? x : y);
}

char max(char x, char y) {
	return (x > y) ? x : y;
}

*/