#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a, b;
    
    cin >> a;
    cin >> b;

    cout << "a: " << a << " " << "b: " << b << endl;
    swap(a, b);
    cout << "a: " << a << " " << "b: " << b << endl;

    return 0;
}