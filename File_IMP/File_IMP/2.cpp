#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	char a[10];
	
	
	//cout << a;
	cin >> a;
	ofstream fout("abc.bin", ios::app | ios::binary );
	fout.write((char*)&a, sizeof(a));
	
	//for(int i  = 0 ; i < 5 ; i++ ){
	//	
	//	fout << endl << a;
	//}
	fout.close();
	
	
	
	//string s;
	//ifstream fin("abc.txt");
	//while(!fin.eof()){
	//	getline(fin, s);
	//	cout << s << endl;
	//}
		
	
	return 0;
}
