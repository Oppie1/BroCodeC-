#include<iostream>
using namespace std;



int main()
{
	char grade;

	cout << "What is your grade?" << endl;
	cin >> grade;

	switch (grade) {
	case 'A':
		cout << "You did great!" << endl;
		break;
	case 'B':
		cout << "You did good." << endl;
		break;
	case 'C':
		cout << "You did ok." << endl;
		break;
	case 'D':
		cout << "You did not do go." << endl;
		break;
	case 'F':
		cout << "You failed" << endl;
		break;

	default:
		cout << "Please enter a leter grade" << endl;

	}
}