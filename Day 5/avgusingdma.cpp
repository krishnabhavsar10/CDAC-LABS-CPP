#include <iostream>
using namespace std;

double avg(double *s, int n)
{
    double res{};
    for (int i = 0; i < n; i++)
    {
        res += s[i];
    }
    return res / n;
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

    cout << "Average is: " << avg(s, n) << endl;

    delete[] s;
}