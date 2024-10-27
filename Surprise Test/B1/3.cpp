#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
    static int count;

public:
    Complex() : real(0), img(0)
    {
        count++;
    }

    Complex(int r, int i) : real(r), img(i)
    {
        count++;
    }

    static int get_count()
    {
        return count;
    }
};

int Complex::count = 0;

int main()
{
    Complex c;          // 1 Obj
    Complex ca[10];     // 10 Obj

    // 11 Obj
    cout << "Number of objects created: " << Complex::get_count() << endl;

    return 0;
}