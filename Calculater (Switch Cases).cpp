#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double num1, num2;
	int choice;
	cout << "Simple Calculator\n";
	cout << "=================\n";
	cout << "Enter 1st Number : ";
	cin >> num1;
	cout << "Enter 2nd Number : ";
	cin >> num2;

	while (true) {
		cout << "\nChoose an operation:\n";
		cout << " 1) Addition (+)\n";
		cout << " 2) Subtraction (-)\n";
		cout << " 3) Multiplication (*)\n";
		cout << " 4) Division (/)\n";
		cout << " 5) Power (x^y)\n";
		cout << " 6) Modulus (fmod)\n";
		cout << " 7) Exit\n";
	    
		cout << "Enter your choice(1 - 7) : ";
		cin >> choice;

		switch (choice) {
			case 1:
				cout << "Result : " << num1 + num2 ;
				break;

			case 2:
				cout << "Result : " << num1 - num2 ;
				break;

			case 3:
				cout << "Result : " << num1 * num2 ;
				break;

			case 4:
				if (num2 == 0) {
					cout << "Error: Division by zero!" ;
				}
				else {
					cout << "Result : " << num1 / num2 ;
				}
				break;

			case 5:
				cout << "Result : " << pow(num1, num2) ;
				break;

			case 6:
				cout << "Result : " << fmod(num1, num2) ;
				break;

			case 7:
				cout << "Thank you for using the calculator!" ;
				break;

			default:
				cout << "Invalid choice! Please enter a number between 1 and 7." ;
		}

		if (choice == 7) {
			break;
		}
	}	

	return 0;
}
