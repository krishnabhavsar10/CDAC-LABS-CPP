#include <iostream>
using namespace std;

void sort(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i] > p[j])
            {
                int t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }
}

void display(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    int *p;
    cout << "Enter No of Element: ";
    cin >> n;

    p = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    display(p, n);
    sort(p, n);
    display(p, n);

    return 0;
}