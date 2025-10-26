#include<iostream>
using namespace std;



int main()
{
	//break=break out of loop
	//continue=skip current iteration

	for (int i = 1; i <= 20; i++) {
		if (i == 13) {
			break;
		}
		cout << i << '\n';
	}
		cout << '\n';

		for (int i = 1; i <= 20; i++) {
			if (i == 13) {
				continue;
			}
			cout << i << '\n';
		}
	}