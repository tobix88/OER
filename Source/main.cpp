#include "main.h"

#include <iostream>
#include <math.h>
#include <chrono>
#include <thread>

using namespace std;

int inputStart;
int inputInt;

void start() {
	cout << "Calculate = If odd, then *3+1; If even, then /2\n";
	cout << "1. Calculate specific integer\n2. Calculate random integer\n3. Calculate bruteforced integer\n\nWaiting for input... ";
	cin >> inputStart;
}

void algorithm(int num) {
	
	int test = num;

	if (test % 2 == 0) {
		cout << "Even\n" << num << "\n\n";
		num = num / 2;
		algorithm(num);
	}
	
	else if (test == 1) {
		cout << "---1--- :Integer is one. Process Ended.\n\n";
		
	}

	else {
		cout << "Odd\n" << num << "\n\n";
		num = num * 3;
		num = num + 1;
		algorithm(num);
	}
}

int main() {
	start();
	
	string startShot;
	string input2;

	switch (inputStart) {
	case 1:

		cout << "Input integer: ";
		cin >> inputInt;
		cout << "--------Start?--------\nYes(Y)           No(N)\n\nWaiting for input... ";
		cin >> startShot;
		if (startShot == "Y" || "y") {
			algorithm(inputInt);

			string input;

			cout << "Restart Program (R); Exit (X)\nWaiting for input...";
			cin >> input;
			cout << "\n\n";

			if (input == "R" || input == "r") {
				cout << "Restarting...";
				system("cls");
				main();
			}

			else if (input == "X" || input == "x") {
				cout << "Exiting...";
				return 0;
			}

			else {
				cout << "Not a choice. Exiting by Default.\n\n Exiting...";
				return 0;
			}
		}
		else {
			cout << "\nNot a choice or didn't start. Returning to home!";
			main();
		}

		break;

	case 2:
		inputInt = rand();
		cout << "Cought random integer :" << inputInt;

		cout << "--------Start?--------\nYes(Y)           No(N)\n\nWaiting for input... ";
		cin >> startShot;

		if (startShot == "Y" || "y") {
			algorithm(inputInt);

			string input;

			cout << "Restart Program (R); Exit (X)\nWaiting for input...";
			cin >> input;
			cout << "\n\n";

			if (input == "R" || input == "r") {
				cout << "Restarting...";
				system("cls");
				main();
			}

			else if (input == "X" || input == "x") {
				cout << "Exiting...";
				return 0;
			}

			else {
				cout << "Not a choice. Exiting by Default.\n\n Exiting...";
				return 0;
			}
		}

		else {
			cout << "\nNot a choice or didn't start. Returning to home!";
			main();
		}

		break;

	case 3:

		cout << "Bruteforce mode is brutal. It'll check up to the highest number of an integer and won't stop. The only way to stop is to close it with task manager or exit by pressing the 'X' button on the top of the window+!\n Run at your own risk!\n Continue (A); Cancel (L)\n";
		cin >> input2;
		if (input2 == "A" || input2 == "a") {
			string input3;

			cout << "Last chance to Cancel!\n Continue (A); Cancel (L)\n";
			cin >> input3;

			if (input3 == "A" || input3 == "a") {
				cout << "Startig in...\n";

				for (int i = 10; i >= 0; i--) {
					this_thread::sleep_for(chrono::milliseconds(1000));
					cout << i << "...\n";
				}

				for (int i = 1; i > 0; i++) {
					this_thread::sleep_for(chrono::milliseconds(500));
					algorithm(i);
				}
				
			}

			else if (input3 == "L" || input3 == "l") {

			}

			else {
				cout << "\n\nNot a choice. Exiting by default...";
				return 0;
			}
		}

		else if (input2 == "L" || input2 == "l") {

		}

		else {
			cout << "\n\nNot a choice. Exiting by default...";
			return 0;
		}

		break;

	default:
		cout << "\nNot a choice\n\n\n\n\n\n\n";
		main();
	}
	return 0;
}

