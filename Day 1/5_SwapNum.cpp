#include<iostream>
using namespace std;

void swapnum(int&, int&);

int main(){
    int a{10},  b{20};
    cout << "a = " << a << " b = " << b << endl;
    swapnum(a,b);
    cout << "a = " << a << " b = " << b << endl;
}

void swapnum(int &a, int &b){
    a += b;
    b = a - b;
    a = a - b;
}