#include <iostream>
using namespace std;

string isorupperlower(char n)
{
    if (n < 65 || (n > 90 && n < 97) || n > 122)
        return "Invalid Character";
    if (n >= 97 && n <= 122)
        return "Small letter";
    else
        return "Capital Letter";
}

int main()
{
    char n;
    cout << "Enter Charater: ";
    cin >> n;
    cout << "Letter " << n << " is " << isorupperlower(n) << endl;
}