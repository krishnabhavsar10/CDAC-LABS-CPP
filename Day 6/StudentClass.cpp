#include <iostream>
#include <string>

using namespace std;

class Student
{

public:
	string name{};
	int rollno{};

	void displayData()
	{
		cout << "name: " << name << " rollno: " << rollno << endl;
	}

	void acceptData()
	{
		cout << "Enter name: ";
		cin >> name;

		cout << "Enter rollno: ";
		cin >> rollno;

		cout << endl;
	}
};

void sort_students(Student *st, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (st[i].rollno > st[j].rollno)
			{
				Student temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
}

int main()
{
	const int n = 4;
	Student s[n];

	for (int i = 0; i < n; i++)
		s[i].acceptData();

	for (int i = 0; i < n; i++)
		s[i].displayData();

	sort_students(s, n);
	cout << endl;

	for (int i = 0; i < n; i++)
		s[i].displayData();

	return 0;
}
