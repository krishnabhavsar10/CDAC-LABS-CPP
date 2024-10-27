#include "Address.h"
#include <iostream>

Address::Address(const string &street, const string &city, const string &zipCode)
    : street(street), city(city), zipCode(zipCode) {}

string Address::getStreet() const
{
    return street;
}

string Address::getCity() const
{
    return city;
}

string Address::getZipCode() const
{
    return zipCode;
}

void Address::display() const
{
    std::cout << street << ", " << city << ", " << zipCode << std::endl;
}
