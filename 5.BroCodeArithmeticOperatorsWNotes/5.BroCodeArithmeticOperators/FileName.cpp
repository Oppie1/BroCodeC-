#include<iostream>
using namespace std;
int main()
{
	//arthmetic operators = retun the result of a specific arithmetic operation (+ - * /)


	int students = 20;
	int studentsClass2 = 23;
	int studentsClass3 = 25;

	int studentsClass4 = 30;
	int studentsClass5 = 40;
	int studentsClass6 = 50;

	int studentsClass7 = 60;
	int studentsClass8 = 70;

	int studentsClass9 = 80;
	int studentsClass10 = 90;
	int studentsClass11 = 100;
	double studentsClass12 = 100;//decimal

	int remainder = 99;

	remainder = students % 2;//Uses modulos operator to see just the remainder

	cout << remainder << endl;//so here there would be a 0 remainder

	remainder = students % 3;

	cout << remainder << endl;//Here you would get 2 as the remainder

	//using modulos operator is a great way to find out if something is even or odd Just do a modulos %2
	//if it is a whole number you know that it is even. If its a 0 remainder its even. If its a 1 remainder its odd


	students = students + 1;//20+1=21
	studentsClass2 += 1;//This means students = students + 1; stuendts = 23 +1 = 24
	studentsClass3++;//students + 1 = new amount of students -> 25+1=26

	studentsClass4 = studentsClass4 - 2;//studentClass4 =30-2=28
	studentsClass4 -= 2;//studentClass5 =40-2=38
	studentsClass4--;//studentClass6 = 50 - 1 = 49

	cout << students << endl;
	cout << studentsClass2 << endl;
	cout << studentsClass3 << endl;

	cout << studentsClass4 << endl;
	cout << studentsClass5 << endl;
	cout << studentsClass6 << endl;

	studentsClass7 = studentsClass7 * 2;//student7Class =60*2=120
	studentsClass8 *= 2;//student8Class =70*2=140

	cout << studentsClass7 << endl;
	cout << studentsClass8 << endl;

	studentsClass9 = studentsClass9 / 2;//studentClass9 = 80/2 = 40
	studentsClass10 /= 2;//studentClass10/2=90/2=45
	studentsClass11 = studentsClass11 / 3;//does not show decimal so just 33
	studentsClass12 = studentsClass12 / 3;//since this is a double it shows 4 decimal places

	cout << studentsClass9 << endl;
	cout << studentsClass10 << endl;
	cout << studentsClass11 << endl;
	cout << studentsClass12 << endl;

	//These arithemetic operators have an order of presidence
	//parenthesis
	//multiplication and division
	//additionand subtraction  pedmas

	int people = 6 - 5 + 4 * 3 / 2;
	int people2 = 6 - (5 + 4) * 3 / 2;

	cout << people << endl;
	cout << people2 << endl;

}