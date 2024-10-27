#include <iostream>
using namespace std;

void mul(double *s, int n)
{
    double res{};
    for (int i = 0; i < n; i++)
    {
        s[i] *= 2;
        cout << s[i] << " ";
    }
}

int main()
{
    int n{};

    cout << "Enter count of numbers: ";
    cin >> n;

    double *s = new double[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    cout << "Final array: " << endl;

    mul(s, n);

    cout << endl;

    delete[] s;
}