#include<iostream>
using namespace std;


//foreach loop = loop that eases the traversal ober an iteratble data set

int main() {

	//string students[] = { "Spongebob", "Patrick","Squidward", "Sandy"};
	int grades[] = { 65, 72, 81,93 };

	for (int grade : grades) {
		cout << grade << '\n';
		
	}

}