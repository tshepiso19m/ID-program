// ID program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	string IDNum;
	string Day, month, year;


	cout << " Enter your IdNum " << endl;
	cin >> IDNum;

	year = IDNum.substr(0, 2);
	month = IDNum.substr(2, 2);
	Day = IDNum.substr(4, 2);

	if (year < "10") {
		year = "20" + year;
	}
	else {
		year = "19" + year;
	}

	cout << " Your date of birth is: " << year << "/" << month << "/" << Day;

	return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
