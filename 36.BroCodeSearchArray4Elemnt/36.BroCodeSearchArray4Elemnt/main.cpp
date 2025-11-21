#include<iostream>
using namespace std;


int searchArray(int array[], int size, int element);
int searchArray(string array[], int size, string element);

int main() {
	
	int numbers[] = { 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(numbers) / sizeof(numbers[0]);;
	int index;
	int myNum;

		cout << "Enter element to search for: " << '\n';
		cin >> myNum;

		index = searchArray(numbers, size, myNum);
		if (index != -1) {
			cout << myNum << " is at index " << index << endl;
		}
		else {
			cout <<myNum<< "My num is not in the array " << endl;
		}

		string foods[] = { "pizza", "hamburger","hotdog"};
		int size2 = sizeof(foods) / sizeof(foods[0]);;
		int index2;
		string myFood;

		cout << "\nEnter Food to search for: " << '\n';
		cin >> myFood;

		index2 = searchArray(foods, size, myFood);
		if (index2 != -1) {
			cout << myFood << " is at index " << index2 <<endl;
		}
		else {
			cout <<myFood<< "  is not in the array " << endl;
		}

		return 0;
}
int searchArray(int array[], int size, int element) {

	for (int i = 0; i < size; i++) {
		if (array[i] == element) {
			return i;

		}

	}
	return -1;
}
	int searchArray(string array[], int size, string element){
	for (int i = 0; i < size; i++) {
		if (array[i] == element) {
			return i;
		}
	
	}
	return -1;
}