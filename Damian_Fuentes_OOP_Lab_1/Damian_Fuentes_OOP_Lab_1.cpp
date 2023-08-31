#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int pin, code, tries = 0, action;
    char response;
    double deposit = 0.0, withdraw = 0.0, balance = 0.0; 
    string account_name;
    bool correct = true;

    cout << "Hello! Please enter your banking information before running ATM program: \n";
    cout << "Account Name: ";
    cin >> account_name;
    cout << "Account Pin: ";
    cin >> code;
    cout << "Account Balance: ";
    cin >> balance;
    
    cout << "Is the prompted information correct?(y/n):\n" << account_name << endl << code << endl << balance << endl;
    cin >> response;

    if (response == 'Y' || response == 'y')
    {
    continuehere: 

        cout << "\n********************Simple ATM**************************\n";
        cout << " Welcome to SIMPLE BANK MACHINE\n" << "Please enter your bank account PIN number:";
        cin >> pin;

            do
            {
                if (pin == code)
                {
                    do 
                    {
                        cout << "\n********************Simple ATM**************************\n";
                        cout << " 1. Deposit \n 2. Withdraw\n 3. Check Balance\n 4. Quit\n";
                        cout << "Please choose an action: ";
                        cin >> action;
                        
                        switch (action)
                        {
                        case 1:
                           cout << "Please enter amount you wish to deposit: ";
                           cin >> deposit;
                           balance = balance + deposit;
                           cout << "Your total current balance is: $" << balance << endl;
                           break;
                        case 2:
                            cout << "Please enter amount you wish to withdraw: ";
                            cin >> withdraw;
                            balance = balance - withdraw;
                            cout << "Your total current balance is: $" << balance << endl;
                            break;
                        case 3:
                            cout << "Your total current balance is: $" << balance << endl;
                            break;
                        case 4:
                            cout << "Thank you and have a lovley day!\n";
                            correct = false;
                            break;
                        }
                    } while (correct != false);
                }
                else
                {
                    tries++;
                    if (tries == 3)
                        correct = false;
                    else
                        cout << "The pin you have entered is incorrect.\n Please try again: ";
                }
            } while (correct != false);
    }
    else if(response == 'N' || response == 'n')
    {
        cout << "\nPlease re-enter account information:\n";
        cout << "Account Name: ";
        cin >> account_name;
        cout << "Account Pin: ";
        cin >> code;
        cout << "Account Balance: ";
        cin >> balance;

        cout << "Is the prompted information correct?(y/n):\n" << account_name << endl << code << endl << balance << endl;
        cin >> response;

    }if (response == 'Y' || response == 'y');
    {
        goto continuehere;
    }

    return 0;
}