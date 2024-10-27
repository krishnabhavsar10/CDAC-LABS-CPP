#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number of Subjects: ";
    cin >> n;

    float *p = new float[n];
    float res = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> p[i];
        res += p[i];
    }
    cout << res/n << endl;
    
    return 0;
}