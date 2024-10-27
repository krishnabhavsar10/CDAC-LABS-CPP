#include<iostream>
#include<fstream>
using namespace std;


class Student{
	private:
		char name[20];
		int age{};
		int rollno{};
	
	public:
		void accept(){
			cout << "Enter your name: ";
			cin >> name;
			
			cout << "Enter your age: ";
			cin >> age;
			
			cout << "Enter your rollno: ";
			cin >> rollno;	
		}

		void display(){
			cout << "Name: " << name << " age: " << age << " rollno: " << rollno << endl;
		}
};


int main(){
	Student s;
	s.accept();
	
	ofstream fout("Student.txt", ios::app | ios::binary);
	fout.write((char*)&s, sizeof(Student));
	fout.close();
	
	Student d;
	ifstream fin("Student.txt", ios::binary);
	fin.read((char*)&d, sizeof(Student));
	d.display();
	
	return 0;
}
