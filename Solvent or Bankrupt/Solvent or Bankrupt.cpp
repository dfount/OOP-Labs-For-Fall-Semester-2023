#include <iostream>

using namespace std;

int main()
{
	int savings, expenses, total;
	char response;
	cout << "Welcome, enter your savings amount: ";
	cin >> savings;
	cout << "Enter your expenses: ";
	cin >> expenses;
	cout << "\nYour savings and expenses are: \n";
	cout << savings <<" " << expenses;
	cout << "\nContinue to calculation?: ";
	cin >> response;

	if (response == 'Y' || response == 'y')
	{
		if (savings < expenses)
		{
			cout << "BANKRUPT";
		}

		else
		{
			total = savings - expenses;
			cout << "Solvent! Your new amount is $" << total;

		}
	}
	else
	{
		cout << "Have a nice day";
		return 0;
	}
	
	return 0;
}