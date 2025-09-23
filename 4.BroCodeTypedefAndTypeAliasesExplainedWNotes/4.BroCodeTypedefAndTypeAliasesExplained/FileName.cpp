#include <iostream>
#include<vector>
using namespace std;

//typedef std::vector<std::pair<std::string, int>>pairlist_t;
//can use typedef as a shorthand identifier to represent whole line of code.
//t= type
//typedef std::string text_t;//So here we could use text_t to represent std::string
//**So he is trying to show a way to replace using namespace std; to shorthand in a different way.
//typedef int number_t;
using text_t = std::string;
using number_t = int;
using std::cout;


int main() {

	//So below we can replace with this data type with something a bit shorter
	//*****std::string firstName -> change to below
	text_t firstName = "Adam"; //So now this variable behaves exactly like a string.
	number_t age = 21;
	
	std::cout << firstName << endl;
	std::cout << age << '\n';
	

	//Typedef = reserved keyword used to create an additional name
	//(alias) for another data type.
	//New identifier for an existing type
	//Helps with readability and reduces typos
	//use when ther is a clear benefit
	//Replaced with using (works better w/ templates)

	//
	//std::vector<std::pair<std::string, int>> pairlist;
	//
	//So here rather than writing that whole line of code above we can just use pairlist_t pairlist

	//pairlist_t pairlist;
	//Helps with code readability and limits typos

	return 0;
}