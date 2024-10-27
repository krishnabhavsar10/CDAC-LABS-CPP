#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
	const int MAX_ACCOUNTS = 10;
	BankAccount *accounts[MAX_ACCOUNTS];
	int accountCount = 0;

	int extra_num = BankAccount::return_num();

	int choice, accountNumber;

    do
    {
        cout << "\nChoose an option:" << endl;
        cout << "1 : Create New Account" << endl;
        cout << "2 : Deposit Amount" << endl;
        cout << "3 : Withdraw Amount" << endl;
        cout << "4 : Show Account Details" << endl;
        cout << "0 : Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank you for banking with us :)" << endl;
            break;

        case 1:
            if (accountCount < MAX_ACCOUNTS)
            {
				accounts[accountCount++] = new BankAccount();
				accounts[accountCount-1]->accept_data();
				cout << "Account created successfully with Account No: " << accountCount + extra_num << endl;
            }
            else
            {
                cout << "Account limit reached!" << endl;
            }
            break;

        case 2:
            cout << "Enter Account No: ";
            cin >> accountNumber;
            if (accountNumber > 0 && accountNumber <= accountCount + extra_num)
            {
                accounts[accountNumber - 1 - extra_num]->deposit();
            }
            else
            {
                cout << "Invalid Account No!" << endl;
            }
            break;

        case 3:
            cout << "Enter Account No: ";
            cin >> accountNumber;
            if (accountNumber > 0 && accountNumber <= accountCount + extra_num)
            {
                accounts[accountNumber - 1 - extra_num]->withdraw();
            }
            else
            {
                cout << "Invalid Account No!" << endl;
            }
            break;

        case 4:
			cout << "Enter Account No: ";
			cin >> accountNumber;
			if (accountNumber > 0 && accountNumber <= accountCount + extra_num)
			{
				accounts[accountNumber - 1 - extra_num]->display_data();
			}
			else
			{
				cout << "Invalid Account No!" << endl;
			}
			break;


        default:
            cout << "Invalid input!" << endl;
        }

    } while (choice != 0);
    cout << endl;
    
    // cout << "Using Pointer Method Style" << endl;

    // BankAccount *b_ptr = new BankAccount("Krishna Bhavsar", 10202002);
    // b_ptr->display_data();


    // Deleting the Created Pointers
    for(int i = 0 ; i < accountCount ; i++){
		delete[] accounts[i];
	}


    return 0;
}