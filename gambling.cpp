#include <iostream>

using namespace std;

int main() {

	double money = 500;
	int ui;
	double betmoney;
	char u;
	do {

		srand(time(NULL));

		int randnum = rand() % 5 + 1;
		cout << randnum << "\n";
		cout << "What number (1 - 5) do you bet on?: ";

		cin >> ui;

		int num[5] = { 1, 2, 3, 4, 5 };

		if (ui < 1 || ui > 5) {
			cout << "Please enter a valid number.";
			continue;
		}

		cout << "\nYou bet on the number " << ui << ". How much money would you like to bet?: ";
		cin >> betmoney;
		if (betmoney > money) {
			cout << "You don't have enough money.";
			continue;
		}
		else {
			if (ui == randnum) {
				cout << "Nice! You've won $" << betmoney * 2 << '!';
				money += betmoney * 2;
				cout << "\nYour total money is: $" << money << endl;
			}
			else {
				cout << "Unfortunately, your number was incorrect. You've lost $" << betmoney << endl;
				money -= betmoney;
				cout << "Your total money is: $" << money << endl;
			}
		}
	} while (true);
}
