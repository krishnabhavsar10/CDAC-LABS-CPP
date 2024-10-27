#include<iostream>
using namespace std;

string evenodd(int &n){
    if(n%2 == 0)
        return "EVEN";
    else
        return "ODD";
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "Number is " << evenodd(n);
}