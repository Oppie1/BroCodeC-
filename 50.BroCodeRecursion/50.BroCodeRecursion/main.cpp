#include <iostream>
using namespace std;



//recursion = a programing technique where a function invokes itself from within
	//break a complex concept into repeatable single steps
	//(iterative vs (recursive. Useful for sorting and searching algorithms
	//disadvantages = uses more memory and slower

int factorial(int num);

int main() {

	cout << factorial(10);
	
}

int factorial(int num) {

	int result = 1;
	if(num>1){
		return num * factorial(num - 1);
	}

	else {
		return 1;
	}

	
}




/*
* int factorial(int num);

int main() {

	cout << factorial(10);
	
}

int factorial(int num) {

	int result = 1;
	for (int i = 1; i <= num; i++) {
		result = result * i;
	}
	return result;
}
* ---------------------------------------------------------------------------
* void walk(int steps);

int main() {
	
	walk(100);
	
}

void walk(int steps) {
	if(steps>0){
		cout << "You take a step!\n";
		walk(steps - 1);
	}

}

---------------------------------------------------------------------------------------
void walk(int steps);

int main() {

	walk(100);

}

void walk(int steps) {
	for (int i = 0; i < steps; i++) {
		cout << "YOu take a step!\n";
	}

}
*/