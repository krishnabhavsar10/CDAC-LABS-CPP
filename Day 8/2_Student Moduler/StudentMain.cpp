#include<iostream>
#include "Student.h"
using namespace std;

int main(){
    Student s;
   // s.accept();
    s.display();

    Student s1("Krishna", 23);
    s1.display();

    return 0;
}