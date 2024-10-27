#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int base , exp;
    cin >> base >> exp;

    cout << base << " ^ " << exp << " = " << pow(base, exp) << endl;
}