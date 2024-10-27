#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, simple_interest;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (annual): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    simple_interest = (principal * rate * time) / 100;

    cout << "Simple Interest is: " << simple_interest << endl;
    return 0;
}
