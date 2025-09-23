#include<iostream>
using namespace std;
//He calls using namespace std evil but for now it saves time. He say we can also use using std::cout; and
//using std::string; to cut down on some of the repitition.

namespace first { //These are global versions that can be accessed from main via 
	int x = 1;
}

namespace second {
	int x = 2;
}

namespace third {
	int x = 3;
}

int main() {
	//Namespace=provides a solution for preventing name conflicts in large projects. Each entity needs a unique
	//name. A namespace allows for identically named entities as long as the namespaces are different.

	int x = 0;//Each entitiy each needs its own unique name. With namespace two or more entitiys can share the same name.
	//This is the local version of variable and can be accessed like this
	cout << x<<endl;

	//If I would like the version of x outside of main in the namespace and define it using those definitions.
	cout << first::x <<endl;//This is prefixing the namespace. And use the scope resolution operator. It tells the computer to look
	//in global space outside of main to access "first" version of x that is found within the first namespace.
	cout << second::x << endl;
	//So entitiys can have the same name so long as their within a different namespace.

	//using namespace third; //first is the name of the namespace.
	//if we have some entity without the prefix of the namespace it is assumed that we are tyring to use the entity used in that
	//particular namespace.

	//cout << x;

	//So this would work within local using namespace third but if you then wanted to use the second value of x you would have to 
	//prefix it.
}