#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	char a[10];
	
	
	//cout << a;
	ofstream fout("abc.txt", ios::app);
	for(int i  = 0 ; i < 5 ; i++ ){
		cin >> a;
		fout << endl << a;
	}
	fout.close();
	
	
	
	//string s;
	//ifstream fin("abc.txt");
	//while(!fin.eof()){
	//	getline(fin, s);
	//	cout << s << endl;
	//}
		
	
	return 0;
}
