#include <iostream>
#include<string>
using namespace std;

class BankAccount
{
private:
	static int i;
	string name;
	double balance;
	const int ID;

public:
	BankAccount() : name(""), balance(0), ID(i++) {}

	BankAccount(string n, double bal) : name(n), balance(bal), ID(i++) {}

	void deposit()
	{
		double amount;
		cout << "Enter the amount to deposit: ";
		cin >> amount;
		if (amount > 0)
		{
			balance += amount;
			cout << "Deposit successful. New balance: " << balance << endl;
		}
		else
		{
			cout << "Invalid amount!" << endl;
		}
	}

	void withdraw()
	{
		double amount;
		cout << "Enter the amount to withdraw: ";
		cin >> amount;
		if (amount > 0 && amount <= balance)
		{
			balance -= amount;
			cout << "Withdrawal successful. New balance: " << balance << endl;
		}
		else if (amount > balance)
		{
			cout << "Insufficient balance!" << endl;
		}
		else
		{
			cout << "Invalid amount!" << endl;
		}
	}

	void accept_data()
	{
		cin.ignore(); 					
		cout << "Enter name: ";
		getline(cin, name);

		cout << "Enter balance: ";
		cin >> balance;
	}

	void display_data()
	{
		cout << "Account No: " << ID << endl;
		cout << "Name: " << name << endl;
		cout << "Current Balance: " << balance << endl;
	}
};

int BankAccount::i = 1;

int main()
{
	const int MAX_ACCOUNTS = 100;
	BankAccount accounts[MAX_ACCOUNTS];
	int accountCount = 0;

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
				accounts[accountCount].accept_data();
				cout << "Account created successfully with Account No: " << accountCount + 1 << endl;
				accountCount++;
			}
			else
			{
				cout << "Account limit reached!" << endl;
			}
			break;

		case 2:
			cout << "Enter Account No: ";
			cin >> accountNumber;
			if (accountNumber > 0 && accountNumber <= accountCount)
			{
				accounts[accountNumber - 1].deposit();
			}
			else
			{
				cout << "Invalid Account No!" << endl;
			}
			break;

		case 3:
			cout << "Enter Account No: ";
			cin >> accountNumber;
			if (accountNumber > 0 && accountNumber <= accountCount)
			{
				accounts[accountNumber - 1].withdraw();
			}
			else
			{
				cout << "Invalid Account No!" << endl;
			}
			break;

		case 4:
			cout << "Enter Account No: ";
			cin >> accountNumber;
			if (accountNumber > 0 && accountNumber <= accountCount)
			{
				accounts[accountNumber - 1].display_data();
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

	return 0;
}
