#include<iostream>
using namespace std;

class BankAccount{
    private:
        static int i;
        string name;
        double balance;
        const int ID;
        static const int extra_num = 20240000;
    
    public:
        BankAccount();
        BankAccount(string, double);
        ~BankAccount();

        static int return_num();
        void deposit();
        void withdraw();
        void accept_data();
        void display_data();
};