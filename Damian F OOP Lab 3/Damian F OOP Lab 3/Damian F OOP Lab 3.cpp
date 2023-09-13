#include <iostream>  
using namespace std;

int main() 
{
	double input;
	int i;
	char response;

	bool run = false;

	do {
		run = false;
		cout << "Hello, please input a number between 11-100: ";
		cin >> input;


		if (input < 11 || input > 100)
		{
			cout << "ERROR: Input must be 11-100" << endl;
		}
		else
		{
			i = input;
			while (true)
			{
				cout << i << " ";
				if (i % 11 == 0)
				{
					break;
				}
				i--;
			}
			cout << endl;
		}

		cout << "\nWould you like to run program once again? (y/n): ";
		cin >> response;
		cout << endl;

		if (response == 'N' || response == 'n')
		{
			return 0;
		}
		else if (response == 'Y' || response == 'y')
		{
			run = true;
		}

	} while (run);

	return 0;
}