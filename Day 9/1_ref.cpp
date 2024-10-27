#include<iostream>
using namespace std;

void swap(int &a, int &b){
	a += b;
	b = a - b;
	a -= b;
}

int main(){
	
	int a, b;
	cout << "Enter 2 Numbers to Swap: ";
	cin >> a >> b;
	
	cout << "a = " << a << " b = " << b << endl;
	swap(a,b);	
	cout << "a = " << a << " b = " << b << endl;

	return 0;
}
