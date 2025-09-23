#include <iostream>
using namespace std;

int main() {
	//type conversion = conversion of a value of one data type to another.
	//Implicit = automatic
	//Explisit = precede value with new data type (int)

	int x = 3.14;
	double y = 3.14;//This is implicit - automatic

	//This converts 3.14 to an integer then is stored in the double z (as 3)
	//This is explisit (preced value with new data type (int)
	double z = (int)3.14;

	char a = 100;


	cout << x << endl;//So here the x value gets truncated since we are dealing with an int.
	cout << y << endl;//Here the decimal is accounted for.

	cout << a << endl;//So we will implistly caste 100 as a character. We will convert it using the acci table to whatever its 
	//equivilent is. So if 100 is converted to a character it would be letter "d"

	cout << (char)100 << endl; //So this is explisitly casting the number 100 to a character which is again the letter d.

	int correct = 8;//Student gets 8 right
	int questions = 10;//Out of 10 total questions
	double score = correct / questions * 100;
	double score2 = correct / (double)questions * 100;

	//We at first are using int data type and so questions is of the int data type so we are getting a trucated version of the 
	//answer since we got rid of the decimal (which was .8) and the basis of what we were trying to find.
	//So when we cast questions as a double data type we retain the decimal portion and so the correct answer which is 80% (.80)


	cout << "Your score is " << score << "%" << endl;
	cout << "Your score is " << score2 << "%" << endl;

	return 0;

}

//How is this useful: suppose we have an online exam. We have to give the user a score. How many questions did they get right
// divided by how many questions there were total.
//Will use type converstion especially in integer division.