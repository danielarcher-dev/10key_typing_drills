//	d. archer
//	12-18-2008
//	10key
/*	This is written in simple c++. It displays a list
	of numbers, and then waits for the user to press a
	sequence of keys, and then press enter.
	The purpose of this program is to present to the user
	a series of excercises to increase dexterity and speed
	on the 10key part of the keyboard. There is no mechanism
	to calculate wpm, accuracy or the like. It is simply
	a means to practice entering certain key patterns.
*/
#include <iostream>
#include <fstream>
#include "10key_source-main.h"
using namespace std;



int main()
{
	loadData();
	cout << "Hello, welcome to 10key.\n"
		<< "This program will print a sequence of numbers\n"
		<< "and pause for you to key it in. Press 'enter'\n"
		<< "at the end of each line to continue.\nbegin:\n";
	// Test01 - horizontal
	while (test01 == 'y')
	{
		pTest01(AC);
		cin >> IC;
		test01 = 'x';
	}// Test02 - vertical
	while (test02 == 'y')
	{
		cout << "7418529630.0369258147\n";
		cin >> IC;
		test02 = 'x';
	}// Test03
	while (test03 == 'y')
	{
		cout << "357159.753951\n";
		cin >> IC;
		test03 = 'x';
	}// Test04 - random patterns
	while (test4 == 'y')
	{
		pRand01(AC);
		cin >> IC;
		pRand01(AC);
		cin >> IC;
		pRand01(AC);
		cin >> IC;
		pRand01(AC);
		cin >> IC;
		pRand01(AC);
		cin >> IC;
		pRand01(AC);
		cin >> IC;
		cout << "go on? y/n";
		cin >> test4;
	}

	// Test05 - sets
	while (test5 == 'y')
	{
		for (int x(0); x < 82; x++)
		{
			pracSet(set, x, 4);
		}
		cout << "go on? y/n";
		cin >> test5;
	}

	/*	for (int i(0);i<20;i++)
		{	cout << rand()%5+12 << " "; }
	*/
	cout << "\nDone. exiting now...";
	return(0);
}
