#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

int Student::i = 0;

// Defining Constructors
Student::Student():name("NULL"), age(0), Rollno(++i){}
Student::Student(string n, int a) : name(n), age(a), Rollno(++i){}

// Defining Member Variables
void Student::accept(){
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;
}

void Student::display(){
    cout << "Rollno: " << Rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
