#include<iostream>
using namespace std;

int main(){
	int n = 7;
	for(int i = n; i >= 1 ; i--){
		for(int j = i; j >= 1 ; j--){
			cout << " ";
		}
		for(int k = i; k <= n ; k++){
			cout << "*";
		}
		cout << endl;
	}
	
}
