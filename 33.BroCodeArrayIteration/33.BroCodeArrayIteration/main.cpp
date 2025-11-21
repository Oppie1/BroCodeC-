#include <iostream>
using namespace std;



int main() {

	char grades[] = { 'A','B','C','D','F' };

	for (int i = 0; i < sizeof(grades) / sizeof(char); i++) {
		cout << grades[i] << '\n';
	}

	return 0;
}

	//string students[]{ "Spongebob","Patrick","Squidward", "Sandy"};

	//cout << students[0]<<'\n';
	//cout << students[1] << '\n';
	//cout << students[2] << '\n';
	//cout << '\n';
	//Or use for loop:


	//for (int i = 0; i < sizeof(students) / sizeof(string); i++) {
		//cout << students[i] << '\n';
	//}

	//return 0;
//}