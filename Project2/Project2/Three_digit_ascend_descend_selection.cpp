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
	int x, a, b, c;
	cout << "Enter a 3 digit number . . ." << endl;
	cin >> x; // This is where the user inputs the 3 digit number

	a = x / 100; // This first digit
	
	b = (x - (a * 100)) / 10; // This is the second digit
	
	c = ((x - (a * 100)) - (b * 10)); // This is the third digit
	

	if (a < b && b < c){ // This checks if the first digit is smaller then the second and if the second is smaller than the third
		cout << "Ascending";}
	else if (a > b && b > c) { // this checks if the first digit is larger then the second and if the second is larger than the third
		cout << "Descending";}
	else {
		cout << "Neither"; // This is only used if the number does not apply to the "if" or the "else if"
	}
	pause();
}