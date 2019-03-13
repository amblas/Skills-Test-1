#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{ 
	double pay; 
	double numberOfHours;

	cout << "Enter pay rate and number of hours each week..." << endl;

	cin >> pay >> numberOfHours;
	cout << "Pay per Hour: " << pay << "	" << "Number of Hours: " << setprecision(2) << fixed << numberOfHours << endl;
	cout << "Income Before Tax: " << setprecision(2) << fixed << (pay * numberOfHours) << endl;
	cout << "Income After Tax: " << setprecision(2) << fixed << (pay * numberOfHours) - ((pay * numberOfHours) * (.14)) << endl;
	cout << "Money on Clothes and Accessories: " << setprecision(2) << fixed << ((pay * numberOfHours) - ((pay * numberOfHours) * (.14))) * (.10) << endl;
	cout << "Money on School Suppplies: " << setprecision(2) << fixed << ((pay * numberOfHours) - ((pay * numberOfHours) * (.14))) * (.01) << endl;
	cout << "Money on Saving Bonds: " << setprecision(2) << fixed << ((pay * numberOfHours) - ((pay * numberOfHours) * (.14))) * (.25) << endl;
	cout << "Money on Parents Saving Bonds: " << setprecision(2) << fixed << ((pay * numberOfHours) - ((pay * numberOfHours) * (.14))) * (.25) * (.50) << endl;
	_getch();
	return 0;
}