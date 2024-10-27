#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex() : real(0), img(0) { count++; }
Complex::Complex(int r, int i) : real(r), img(i) { count++; }

int Complex::count = 0;

void Complex::Accept(){
    cout << "Enter Real Part: " ;
    cin >> real;

    cout << "Enter Imaginery Part: ";
    cin >> img;
}

void Complex::Display(){
    cout << "Your Complex Number is: " << real << " + " << img <<"i" << endl;
}

int Complex::getcount(){
    return count;
}