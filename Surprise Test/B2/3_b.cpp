#include <iostream>
using namespace std;

void display(int *p)
{
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
}

void mul_5(int *p, int *q)
{
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i] * 5;
    }
}

int main()
{

    int a[5] , b[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    mul_5(a,b);
    display(b);

    return 0;
}