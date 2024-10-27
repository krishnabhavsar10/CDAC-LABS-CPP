#include<iostream>
#include<string>

using namespace std;

struct Student{
	string name;
	int rollno;
};

int main(){
	const int n = 2;
	Student sarr[n];
	// for(int i = 0 ; i < n ; i++){
	// 	cout << "Enter name: ";
	// 	cin >> sarr[i].name;
	
	// 	cout << "Enter rollno: ";
	// 	cin >> sarr[i].rollno;		
	// } 
	
	// cout << endl;
	
	for(int i = 0 ; i < n ; i++){
		cout << "name: " << sarr[i].name << endl;
		cout << "rollno: " << sarr[i].rollno << endl;				
	} 
	return 0;
}




	
