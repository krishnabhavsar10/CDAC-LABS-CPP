#include <iostream>
using namespace std;

class Employee
{

private:
    string name;
    int ID;
    double basicSalary;

public:
    Employee(string n, int id, double sal) : name(n), ID(id), basicSalary(sal)
    {
       // cout << "EMP PARAM CTOR CALLED" << endl;
    }

    string getName() const { return name; }

    int getID() const { return ID; }

    double getBasicSalary() const { return basicSalary; }

    virtual double CalcSalary() = 0;

    virtual ~Employee()
    {
       // cout << "EMP DTOR CALLED" << endl;
    }
};

class PermEmployee : public Employee
{

private:
    double healthInsurance;
    double providentFund;
    double gratuity;
    double totalSalary;

public:
    PermEmployee(string name, int id, double basSal, double healthIns, double pf, double grat)
        : Employee(name, id, basSal),
          healthInsurance(healthIns),
          providentFund(pf),
          gratuity(grat)
    {
       // cout << "PERM-EMP PARAM CTOR CALLED" << endl;
    }

    double CalcSalary() override
    {
        return getBasicSalary() + healthInsurance + gratuity - providentFund;
    }

    ~PermEmployee()
    {
       // cout << "PERM-EMP DTOR CALLED" << endl;
    }
};

class ContractEmployee : public Employee
{
private:
    double contractAmount;
    double hoursWorked;
    double hourlyRate;

public:
    ContractEmployee(string name, int id, double basicSalary, double ca, double hw, double hr)
        : Employee(name, id, basicSalary),
          contractAmount(ca),
          hoursWorked(hw),
          hourlyRate(hr)
    {
       // cout << "CONT-EMP PARAM CTOR CALLED" << endl;
    }

    double CalcSalary() override
    {
        return getBasicSalary() + hourlyRate * hoursWorked + contractAmount;
    }

    ~ContractEmployee()
    {
       // cout << "CONT-EMP DTOR CALLED" << endl;
    }
};

int main()
{
    PermEmployee permEmp("Krishna", 1001, 50000, 2000, 1500, 1000);
    ContractEmployee contEmp("Manit", 2001, 30000, 10000, 120, 50);

    Employee* empPtr;

    empPtr = &permEmp;
    cout << "PermEmployee Salary: " << empPtr->CalcSalary() << endl;

    empPtr = &contEmp;
    cout << "ContractEmployee Salary: " << empPtr->CalcSalary() << endl;

    return 0;
}