#include<iostream>
using namespace std;

double sumofnums(int n){
    double a{};
    if(n == 0)
        return 0;
    cin >> a;
    return a + sumofnums(n - 1);
}

int main(){
    int n;
    cout << "Enter count of numbers to be added: ";
    cin >> n;
    cout << endl << sumofnums(n) << " is the sum of numbers";
}