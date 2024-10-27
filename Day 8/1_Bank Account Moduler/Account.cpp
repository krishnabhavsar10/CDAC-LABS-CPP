#include <iostream>
#include<string>
#include "Account.h"
using namespace std;

// Defining Static variable
int BankAccount::i = 0;

// Defining Construtors
BankAccount::BankAccount() : name("NULL"), balance(0), ID(++i) {
    cout << "CTOR DEF CALLED" << endl;
}
BankAccount::BankAccount(string s, double b) : name(s), balance(b), ID(++i) {
    cout << "CTOR PARAM CALLED";
}

BankAccount::~BankAccount(){
    cout << "DTOR CALLED" << endl;
}

int BankAccount::return_num(){
    return extra_num;
}

// Defining Member Functions
void BankAccount::accept_data()
{
    cin.ignore(); 					
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter Current Balance: ";
    cin >> balance;

    cout << endl;
}

void BankAccount::withdraw()
{
    double amt;
    cout << "Enter Amount to Withdraw: ";
    cin >> amt;

    if (amt >= 0 && amt <= balance)
    {
        cout << "Amount Withdraw Successful." << endl;
        balance -= amt;
        cout << "Current Balance: " << balance << endl;
    }
    else if (amt > balance)
    {
        cout << "Insufficient Balance." << endl;
    }
    else
    {
        cout << "Invalid Amount." << endl;
    }
}

void BankAccount::deposit()
{
    double amount;
    cout << "Enter the amount to Deposit: ";
    cin >> amount;

    if (amount > 0)
    {
        cout << "Amount Deposited Successfully." << endl;
        balance += amount;
        cout << "Current Balance: " << balance << endl;
    }
    else
    {
        cout << "Invalid Amount." << endl;
    }
}

void BankAccount::display_data()
{
    cout << "\nAccount Number: " << ID + extra_num << endl;
    cout << "Name: " << name << endl;
    cout << "Current Balance: " << balance << endl;
    cout << endl;
}