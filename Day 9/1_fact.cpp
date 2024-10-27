#include<iostream>
using namespace std;

void fact(int &a)
{	
	int n = a - 1;
	for(int i = 2; i <= n ; i++){
		a *= i;
	}
}

int main(){
	int a = 5;
	fact(a);
	cout << a << endl;	
}
