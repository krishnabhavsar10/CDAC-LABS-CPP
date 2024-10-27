#include<iostream>
using namespace std;

int max(int *p){
    int a = p[0];
    for(int i = 1; i < 5 ; i++)
        if(a < p[i])
            a = p[i];
    return a;
}

int min(int *p){
    int a = p[0];
    for(int i = 1; i < 5 ; i++)
        if(a > p[i])
            a = p[i];
    return a;
}

int main(){
    int a[5];

    cout << "Enter 5 integers: ";
    for(int i = 0 ; i < 5 ; i++)
        cin >> a[i];

    cout << max(a) << endl;
    cout << min(a) << endl;
    
    return 0;
}