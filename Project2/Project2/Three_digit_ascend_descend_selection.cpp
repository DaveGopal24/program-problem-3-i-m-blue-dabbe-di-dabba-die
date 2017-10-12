/*
Julian Haddad - 10/5/17 Period 3
Assignment Name :  Three Digit Ascend/Descend
Three Digit Ascend/Descend
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	while (!_kbhit());
	_getch();
	cout << "\n";
}

void main() {
	for (size_t i = 0; i < 30; i++) { // lets the user enter 30 numbers to check if ascending, desceding, or niether after 30 code stops

		int x; // defines x s it can be used

		cout << "Enter a 3 digit number : ";
		cin >> x; // This is where the user inputs the 3 digit number

		int a; // defines variabes 
		int b;
		int c;

		a = x / 100; // This first digit

		b = (x / 10) % 10; // This is the second digit

		c = x % 10; // This is the third digit


		if (a < b && b < c) { // This checks if the first digit is smaller then the second and if the second is smaller than the third, if it meets condition prints out the word ascending
			cout << x << " is Ascending." "\n";
		}

		else if (a > b && b > c) { // this checks if the first digit is larger then the second and if the second is larger than the third, if it meets condition prints out word descending
			cout << x << " is Descending." "\n";
		}

		else {
			cout << x << " is Neither." "\n";
		} // This is only used if the number does not apply to the "if" or the "else if", applys to everythin else not meet in conditions above, if meet prints out neither

	}

	pause(); // lets user read the code

}
