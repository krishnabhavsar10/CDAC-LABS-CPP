#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int rollno;
};

void print_students(Student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "rollno: " << s[i].rollno << " name: " << s[i].name << endl;
    }
}

int main()
{
    const int n = 2;
    Student sarr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter rollno: ";
        cin >> sarr[i].rollno;

        cout << "Enter name: ";
        cin.ignore();
        getline(cin, sarr[i].name);

        cout << endl;
    }

    cout << endl;

    print_students(sarr, n);

    return 0;
}
