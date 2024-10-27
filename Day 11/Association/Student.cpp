#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(const string &name, int rollNumber, Address *address) 
    : name(name), rollNumber(rollNumber), address(address) {}

void Student::setAddress(Address *addr)
{
    address = addr;
}

string Student::getName() const
{
    return name;
}

int Student::getRollNumber() const
{
    return rollNumber;
}

Address *Student::getAddress() const
{
    return address;
}

// Display student information
void Student::display() const
{
    std::cout << "Name: " << name << ", Roll Number: " << rollNumber << std::endl;
    std::cout << "Address: ";
    if (address)
    {
        address->display();
    }
    else
    {
        std::cout << "No address available" << std::endl;
    }
}
