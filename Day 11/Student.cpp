#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    static int i;
    string name;
    int age;
    const int Rollno;

public:
    Student() : name("NULL"), age(0), Rollno(++i) {}
    Student(string n, int a) : name(n), age(a), Rollno(++i) {};

    // void accept()
    // {
    //     cout << "Enter Name: ";
    //     getline(cin, name);

    //     cout << "Enter Age: ";
    //     cin >> age;
    // }

    // void display()
    // {
    //     cout << "Rollno: " << Rollno << endl;
    //     cout << "Name: " << name << endl;
    //     cout << "Age: " << age << endl;
    // }

    friend ostream &operator<<(ostream &os, const Student &s);
    friend istream &operator>>(istream &is, Student &s);
};

ostream &operator<<(ostream &os, const Student &s)
{
    return os << "\nRollno: " << s.Rollno << "\nName: " << s.name << "\nAge: " << s.age << endl;
}

istream &operator>>(istream &is, Student &s)
{
    cout << "\nEnter Name: ";
    getline(is, s.name);  
    
    cout << "Enter Age: ";
    is >> s.age;  

    return is;
}

int Student::i = 0;

int main()
{
    Student s("Krishna", 23), s1;
    cout << s;
    cin >> s1;
    cout << s1;
    return 0;
}