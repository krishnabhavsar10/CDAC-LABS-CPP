#include <iostream>
using namespace std;

int main()
{

    int a[2][2] = {{1, 2}, {3, 4}};
    int(*p)[2] = a;

    for (int i = 0; i < 2; i++)
    {
        cout << p[0][i] << " " << p[1][i] << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << (*(p + i))[j] << " ";
        }
        cout << endl;
    }

    return 0;
}