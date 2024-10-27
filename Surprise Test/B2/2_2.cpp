#include<iostream>
using namespace std;

int binequi(int n){
    if (n == 0)
        return 0;
    return (n % 2) + 10 * binequi(n/2);
}

int main(){
    int n;
    cout << "Enter number for binary conversion: ";
    cin >> n;
    cout << "Binary equivalent: " << binequi(n) << endl;
}