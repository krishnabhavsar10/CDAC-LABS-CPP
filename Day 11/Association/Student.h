#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Address.h"

using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    Address *address; // Association with Address class (via pointer)

public:
    Student(const string &name, int rollNumber, Address *address);

    void setAddress(Address *addr);

    string getName() const;
    int getRollNumber() const;
    Address *getAddress() const;

    void display() const;
};

#endif
