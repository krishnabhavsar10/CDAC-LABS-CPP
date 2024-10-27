#include<iostream>
using namespace std;

int fact(int x){
    for(int i = x - 1 ; 0 < i ; i--)
        x *= i;
    return x;
}

int main(){
    int f;
    cout << "Number of Factorial to print: ";
    cin >> f;
    
    for(int i = 1 ; i <= f ; i++)
        cout << fact(i) << " "; 
    cout << endl;
}