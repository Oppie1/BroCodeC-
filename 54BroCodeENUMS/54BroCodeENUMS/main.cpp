#include <iostream>
using namespace std;


//enums (enumerations) = a user-defined data type that consists of paried named-integer constants.
//Great if you have a set of potential options.


enum Day{sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

enum Flavor{vanilla, chocaolate, strawberry,mint};//If not explicitly stated values will be assigned (here 0-3)

enum Color{red, orange, yellow, green, blue, purple};

enum Planet{mercury = 4880, venus = 12104, earth = 12756, mars = 6794, jupiter = 142984, saturn = 108728, uranus = 51118,
neptune = 49532, pluto = 2320};


int main() {


	Day today = friday;


	switch (today) {
	case sunday: cout << "It is Sunday\n";
		break;
	case monday: cout << "It is Monday\n";
		break;
	case tuesday: cout << "It is Tuesday\n";
		break;
	case wednesday: cout << "It is Wednesday\n";
		break;
	case thursday: cout << "It is Thursday\n";
		break;
	case friday: cout << "It is Friday\n";
		break;
	case saturday: cout << "It is Saturday\n";
		break;

	}

}