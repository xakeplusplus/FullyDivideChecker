#include <iostream>

using namespace std;

int main()
{
	cout << "This program will check if two numbers fully divide.\n\n";

	int dividend, divisor;

	cout << "Enter the dividend: ";
	cin >> dividend;

	cout << "\nEnter the divisor: ";
	cin >> divisor;

	if (dividend % divisor != 0)
	{
		cout << endl << dividend << " doesn't fully divide to " << divisor;
	}
	else {
		cout << endl << dividend << " fully divides to " << divisor;
	}

	return 0;
}