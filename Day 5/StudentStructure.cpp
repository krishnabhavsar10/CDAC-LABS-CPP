#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int rollno;
};

void print_struct(Student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "name: " << s[i].name << endl;
        cout << "rollno: " << s[i].rollno << endl;
    }
}

void initialise_struct(Student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter rollno: ";
        cin >> s[i].rollno;
    }
}

int main()
{
    const int n = 2;
    Student sarr[n];

    initialise_struct(sarr, n);
    print_struct(sarr, n);

    return 0;
}