#include <iostream>
using namespace std;
#include <string>


//fill() = Fills a range of elements with a specified value. fill(begin, end, value)
int main()
{

	const int SIZE = 99;
	string foods[SIZE];

	fill(foods, foods + (SIZE/3), "pizza");
	fill(foods + (SIZE/3),foods+(SIZE/3)*2, "hamburgers");
	fill(foods + (SIZE / 3)*2, foods + SIZE, "hotdogs");

	for (string food : foods) {
		cout << food << '\n';
	}

	return 0;

}