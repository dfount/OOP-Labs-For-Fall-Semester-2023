#include <iostream>
using namespace std;

int main()
{
	char again = 'y';
	char symbol;
	float n1;
	float n2;
	do {
		cout << "Enter operation symbol: " << endl;
		cin >> symbol;

		cout << "Enter the numbers for operation:" << endl;
		cin >> n1 >> n2;

		switch (symbol)
		{
		case '+':
			cout << n1 << " + " << n2 << "=" << endl;
			cout << n1 + n2;
			break;

		case '-':
			cout << n1 << " - " << n2 << " = " << endl;
			cout << n1 - n2;
			break;

		case'*':
			cout << n1 << " * " << n2 << " = " << endl;
			cout << n1 * n2;
			break;

		case'/':
			cout << n1 << " / " << n2 << " = " << endl;
			cout << n1 / n2;
			break;

		}
		cout << " equation solved!" << endl;

		cout << "Would you like to solve another: (y or n) " << endl;
		cin >> again;
	} while(again == 'y');
	return 0;
}