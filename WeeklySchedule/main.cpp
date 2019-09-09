/*
Grace Hoffmann
C ++ Fall 2019
Lab: 2A
A program that prints your weekly schedule
*/

#include <iostream>
#include <string>

using namespace std;

//Function Prototype
void output(const string, const string, const string, const string, const string, string, string, string, string, string, string,
	string, string, string);


int main()
{
	//Declaring Variables
	const string a = "Monday";
	const string b = "Tuesday";
	const string c = "Wednesday";
	const string d = "Thursday";
	const string e = "Friday";
	string f = "College Algebra and Trigonometry - 127";
	string g = "Intro to Biology - 102";
	string i = "Principles of Microeconomics - 130";
	string j = "C++ - 162";
	string l = "8:00";
	string m = "9:10";
	string o = "11:30";
	string p = "12:40";
	string q = "2:00";

	//Function Call
	output(a, b, c, d, e, f, g, i, j, l, m, o, p, q);

	return 0;

}

// Function Definition
void output(const string a, const string b, const string c, const string d, const string e, 
	string f, string g, string i, string j, string l, string m, string o, string p, string q)
{ 
	cout << a << "\t\t" << l << "\t" << f << endl;
	cout << a << "\t\t" << m << "\t" << g << endl;
	cout << a << "\t\t" << o << "\t" << i << endl;
	cout << a << "\t\t" << p << "\t" << j << endl;

	cout << b << "\t\t" << l << "\t" << f << endl;
	cout << b << "\t\t" << p << "\t" << j << endl;

	cout << c << "\t" << l << "\t" << f << endl;
	cout << c << "\t" << m << "\t" << g << endl;
	cout << c << "\t" << o << "\t" << i << endl;
	cout << c << "\t" << p << "\t" << j << endl;

	cout << d << "\t" << l << "\t" << f << endl;
	cout << d << "\t" << "9:40" << "\t" << "Into to Biology Lab - 103" << endl;
	cout << d << "\t" << p << "\t" << j << endl;

	cout << e << "\t\t" << l << "\t" << f << endl;
	cout << e << "\t\t" << m << "\t" << g << endl;
	cout << e << "\t\t" << o << "\t" << i << endl;

}