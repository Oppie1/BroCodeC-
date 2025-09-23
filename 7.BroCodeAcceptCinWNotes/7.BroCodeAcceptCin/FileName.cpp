#include <iostream>
#include <string>//Must include this library when inputing sentence and not just one word
using namespace std;

//cout<<(insertion operator) cout to screen
//cin>>(extraction operator) cin from user

int main() {

	string name;// storage variable string of characters
	string name2;
	int age;//storage variable for int

	cout << "What's your name " << endl;
	cin >> name;//Stores in name
	//So here there is automatically an \n - new line character that will have to be delt with when using getline function.

	cout << "Hello my name is " << name << endl;

	cout << "\nWhat is your full name? " << endl;

	getline(cin >>ws, name2);//getline keyword captures everything including white spaces so whole sentence not just one word is read in.
	//ws Needed here because getline reads everything all the way to the new line character from above. Clears buffer.
	cout << "My full name is " << name2 << endl;

	cout << "How old are you? " << endl;
	cin >> age;

	cout << "You are " << age << " years old." << endl;




	return 0;
}

//cin.ignore();//Needed here because getline reads everything all the way to the new line character from above. Clears buffer.