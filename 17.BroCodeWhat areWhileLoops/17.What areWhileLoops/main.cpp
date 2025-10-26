#include<iostream>
#include<string>
using namespace std;

int main() {

	string name;

	while (name.empty()) {//This says so long as name is empty run this loop
		
		cout << "Enter your name: ";
		getline(cin,name);//If this is empty run this loop again.
		//If not, meaning you entered a name, move to next code block.

	}

	std::cout << "Hello " << name;

}

//Demonstrates and infinite loop via a while loop statement
//while (1 == 1) {
//	cout << "Help! I am stuck in an infinite loop!" << endl;
//}