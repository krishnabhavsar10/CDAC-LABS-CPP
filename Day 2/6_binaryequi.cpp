#include <iostream>
using namespace std;

// Using Recursion
int binequi(int n)
{
    if (n == 0)
        return 0;
    return (n % 2) + 10 * binequi(n / 2);
}

// Using Loop
int binequi1(int n)
{
    int res = 0;
    // int count = 1;
    // while (n != 0)
    // {
    //     res += count * (n % 2);
    //     count *= 10;
    //     n /= 2;
    // }

    for(int count = 1; n != 0 ; count *= 10, n /= 2)
        res += count * (n%2);
        
    return res;
}

int main()
{
    int n;
    cout << "Enter number for binary conversion: ";
    cin >> n;
    cout << "Binary equivalent: " << binequi(n) << endl;
    cout << "Binary equivalent: " << binequi1(n) << endl;

}