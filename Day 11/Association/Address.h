/*
- #pragma once is a compiler directive that ensures a file
is only included once during compilation, avoiding multiple definition errors.
*/
#pragma once

#include <string>
using namespace std;

class Address
{
private:
    string street;
    string city;
    string zipCode;

public:
    Address(const string &street, const string &city, const string &zipCode);

    string getStreet() const;
    string getCity() const;
    string getZipCode() const;

    void display() const;
};