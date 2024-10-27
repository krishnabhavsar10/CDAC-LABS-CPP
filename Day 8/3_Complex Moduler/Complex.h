#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
        static int count;

    public:
        // Constructor Declaration
        Complex();
        Complex(int, int);

        // Member Function Declaration
        void Accept();
        void Display();
        static int getcount();
};