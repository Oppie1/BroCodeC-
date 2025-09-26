#include<iostream>
using namespace std;

//If statements = do something if condition is true. if not, then dont do it.


int main() {

	int age;

	cout << "Enter your age: ";
	cin >> age;

	if (age > 100) {
		cout << "You are too old to enter this site" << endl;
	}


	else if (age > 18) {
		cout << "Welcome to the site!" << endl;
	}

	else if (age == 18) {//Don't use just one = sign as that would set 18 to age. Want to use == which means is 18
		cout << "Welcome to the site second greating!" << endl;
	}

	else if (age >= 18) {
		cout << "Welcome to the site. This combo is what we should use >=!" << endl;
	}

	else if (age < 0) {//In else if since this is true we actually skip the next if statement
		cout << "You havenet been born yet " << endl;
	}

	else if (age > 100) {
		cout << "You are too old to enter this site" << endl;
	}

	else {
		cout << "You are not allowed in the site " << endl;
	}


	return 0;
}