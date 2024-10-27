#include <iostream>
using namespace std;

class Student
{
    private:
        static int i;
        string name;
        int age;
        const int Rollno; 

    public:
        Student();
        Student(string, int);

        void accept();
        void display();
};