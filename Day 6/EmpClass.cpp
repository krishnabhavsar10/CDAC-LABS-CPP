#include <iostream>
#include <string>

using namespace std;

class Employee
{

public:
	string name;
	int empno;
	double salary;
	string Dept;

	void displayData()
	{
		cout << "Emp No: " << empno << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
		cout << "Department: " << Dept << endl;
		cout << endl;
	}

	void acceptData()
	{
		cout << "Emp No: ";
		cin >> empno;

		cout << "Name: ";
		cin >> name;

		cout << "Salary: ";
		cin >> salary;

		cout << "Department: ";
		cin >> Dept;

		cout << endl;
	}
};

void sort_students(Employee *st, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (st[i].empno > st[j].empno)
			{
				Employee temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
}

int main()
{
	const int n = 2;
	Employee e[n];

	// for (int i = 0; i < n; i++)
	// 	e[i].acceptData();

	for (int i = 0; i < n; i++)
		e[i].displayData();

	// sort_students(e, n);
	// cout << endl;

	// for (int i = 0; i < n; i++)
	// 	e[i].displayData();

	return 0;
}
