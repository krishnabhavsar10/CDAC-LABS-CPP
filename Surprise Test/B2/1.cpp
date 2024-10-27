#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter Character Alphabet to Convert: ";
    cin >> c;

    if (65 <= c && c <= 90)
    {
        cout << char(c + 32);
    }
    else if (97 <= c && c <= 122)
    {
        cout << char(c - 32);
    }
    else
    {
        cout << "Not An Alphabet." << endl;
    }
    return 0;
}





////////////////////////////////////////////////////////////////////////////

/*
#include <iostream>
#include <cctype>  // For isupper(), islower(), toupper(), tolower(), and isalpha()
using namespace std;

int main() {
    char c;
    cout << "Enter Character Alphabet to Convert: ";
    cin >> c;

    if (isalpha(c)) {  // Check if input is an alphabet
        if (isupper(c)) {
            cout << char(tolower(c));  // Convert to lowercase
        } else if (islower(c)) {
            cout << char(toupper(c));  // Convert to uppercase
        }
    } else {
        cout << "Not an Alphabet." << endl;
    }
    return 0;
}
*/