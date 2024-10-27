#include<iostream>
using namespace std;

int* max(int *a, int *b){
    if(*a > *b)
        return a;
    return b;
}

int main(){
    int a = 10;
    int b = 20;
    int *p = max(&a, &b);
    cout << *p;
    return 0;
}