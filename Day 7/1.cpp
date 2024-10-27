#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	static int i;
	string name{};
	int rollno{};
	const int ID{};

public:
	Student() : name(""), rollno(0), ID(i++)
	{	// Initialization using Constructor initializer list
		// cout << "Default Constructor invoked" << endl;
	}

	Student(string n, int r) : name(n), rollno(r), ID(i++)
	{
		// cout << "Parameterized Constructor invoked" << endl;
	}

	void displayData()
	{
		cout << "Name: " << name << endl;
		cout << "Rollno: " << rollno << endl;
		cout << "ID: " << ID << endl;
		cout << endl;
	}

	void acceptData()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter rollno: ";
		cin >> rollno;
		cout << endl;
	}

	Student *printAddress()
	{
		return this;
	}
};

int Student::i = 1;

int main()
{
	Student *s = new Student();
	s->displayData();

	Student *s1 = new Student("Krishna Bhavsar", 79);
	s1->displayData();

	cout << "Address of s: " << s << endl;
	cout << "Address return by \"this\": " << s->printAddress() << endl;
	cout << endl;

	delete s;
	delete s1;

	const int n = 2;
	Student sar[n];

	// for (int i = 0; i < n; i++)
	// {
	// 	sar[i].acceptData();
	// }

	// for (int i = 0; i < n; i++)
	// {
	// 	sar[i].displayData();
	// }
}
