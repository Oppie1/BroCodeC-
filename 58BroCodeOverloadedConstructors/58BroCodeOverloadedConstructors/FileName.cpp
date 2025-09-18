#include<iostream>
using namespace std;

//Overloaded constructors = multiple constructors w/ same name but different parameters
//allows for varying arguments when instantiating an object.


class Pizza {
public:
	string	topping1;
	string topping2;

	Pizza() 
	{
	};

	Pizza(string x) {
		topping1 = x;
	}

	Pizza(string x, string y) {
			topping1 = x;
			topping2 = y;
}

};

int main() {

	Pizza pizza1("pepperoni");
	Pizza pizza2("mushrooms", "peppers");
	Pizza pizza3;

	cout << pizza1.topping1 << endl;
	cout << pizza2.topping1 << endl;
	cout << pizza2.topping2 << endl;

}