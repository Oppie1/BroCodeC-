#include<iostream>
using namespace std;

	//Getters and setters are used within this context of abstraction= where we hide any unnecessary data
	// from outside a class. getter = function that makes a private attribute readable.
	// setter=function that makes a private attribute writeable

	class Stove {

	private://This follows the rule of abstraction by hiding any unnecessary data from a user that they dont need.
		int temperature2 = 0;//User does not have access to temperature2 from outside the class.
		int temperature3 = 0;

	public://Because this is public (below temp) it means it can be accessed from outside the class - from main here.
		int temperature = 0;
		//int temperature2 = 0;

		int getTemperature2() {
			return temperature2;
		}

		int getTemperature3(int t) {
			return temperature3;
		}

		void setTemperature3(int t) {
			temperature3 = t;
		}
	};

	int main() {

		Stove stove;

		stove.temperature = 1000000; //This does not make sense so maybe we dont want temp to be accessed from main.
		//Or from outside the Stove class
		cout << stove.temperature << endl;
		cout << "The temperature2 setting is: " << stove.getTemperature2();

		stove.setTemperature3(100001);
		cout <<"\n" << stove.getTemperature3(0) << endl;

			return 0;

	}
