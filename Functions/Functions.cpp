/*
 * Functions.cpp
 *
 *  Created on: Jul 9, 2018
 *      Author: Nathaniel Parizi
 */
// ***************************************************************************
// C++ consists of extensions to the language C. In C++ we split the program up using classes
// and class contain both data and functions. Methods are functions that are part of a class generally speaking.
// It is common to use functions in a pure C++ program, even though they should belong to classes.
// For starters we will have a code that outputs a menu.
//***************************************************************************
#include <iostream>

using namespace std;

// Before calling functions, they should be above the code blocks where they are called!***

void showMenu() {

	cout << "1 Search " << endl;
	cout << "2 View Record " << endl;
	cout << "3 Quit " << endl;

}

void getName() {

	string name;
	cout << "Whats your name?" << endl;
	cin >> name;
	cout << "Hello " << name << "." << endl;

}

void getSelection() {
	cout << "Enter selection" << endl;

	int input;
	cin >> input;

	switch (input) {

	case 1:
		cout << "Searching ... " << endl;
		break;
	case 2:
		cout << "Viewing ...." << endl;
		break;
	case 3:
		cout << "Quitting ...." << endl;
		break;
	default:
		cout << "Please input correct value as stated " << endl;
		break;

	}

}

int secretInt() {

	return 7;
}

//Function Parameters**********************************
int doubleNum(int q) {

	return q * 2;
}

int main() {  // calling function / driver class
//case sensitive

	showMenu();
	getSelection();
	getName();

	cout << "Magic number: " << secretInt() << endl;
	cout << "Enter a number and I will double it! " << flush;
	int input2;
	cin >> input2;
	int coolNum = doubleNum(input2);
	cout << "Your number  doubled: " << coolNum << endl;

	return 0;
}

