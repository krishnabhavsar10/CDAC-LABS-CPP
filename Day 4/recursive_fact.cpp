#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int num;
    cout << "enter number of factorials to be printed: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
        cout << fact(i) << " ";

    return 0;
}
