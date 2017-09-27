/*
Jose Marquez - 9/25/17 Period 2
Assignment Name : Take_in_Data
Attempt to display to the user questions to take in data and create variables to store aforementioned data
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Define and Assign your variable(s)
	int day_of_the_month_for_birthday;
	char coin_flip;
	bool coinsMatched = false; // did they get the same side of the coin
	double walletMoney;

	int calc_1, calc_2, calc_3, calc_4;
	// User Queries
	cout << "What day of the month is your birthday ";
	cin >> day_of_the_month_for_birthday;
	cout << "What side of the coin did you get after flipping it, (H/T) ";
	cin >> coin_flip;
	if (coin_flip == 'h' || coin_flip == 'H') {
		coinsMatched = true; // only set to true if choice answer was 'h' or 'H'
	}
	cout << "How much money is in your wallet : ";
	cin >> walletMoney;

	cout << "Give me 3 random whole numbers : " << "\n";
	cout << "Number 1 : ";
	cin >> calc_1;
	cout << "Number 2 : ";
	cin >> calc_2;
	cout << "Number 3 : ";
	cin >> calc_3;

	// After questions print out stored data 
	cout << "So you were born on day " << day_of_the_month_for_birthday << " of your birth month. \n";
	cout << boolalpha << "I think it is " << coinsMatched << " we got the same side of the coin." << endl; // ENDL different ways to go to newline
	cout << "So you have $" << walletMoney << '\n';// another new way

	cout << calc_1 << " - " << calc_2 << " = " << calc_1 - calc_2 << endl; // you can do math as output
	calc_4 = calc_3 * calc_3; // storing first
	cout << calc_3 << " * " << calc_3 << " = " << calc_4 << "\n";
	cout << calc_2 << " + " << calc_1 << " + " << calc_3 << " = " << calc_2 + calc_1 + calc_3 << "\n";
	cout << calc_3 << " / " << 3 << " = " << calc_3 / 3 << "\n";

	pause(); // pauses to see the displayed text
}

