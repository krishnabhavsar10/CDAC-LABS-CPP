#include <iostream>
using namespace std;

class Array
{
private:
	int *p;	  // Stores Base Address
	int size; // Stores Size of Array to Allocate Dynamically
public:
	// Default Constructor
	Array() : p(nullptr), size(0) {}

	// Param Constructor
	Array(int s)
	{
		size = s;
		p = new int[size];
	}

	// Copy Constructor
	Array(const Array &x)
	{
		size = x.size;
		p = new int[size];
		for (int i = 0; i < size; i++)
		{
			p[i] = x.p[i];
		}
	}

	// Indexing Using .at function
	int &at(int index)
	{
		return p[index];
	}

	// Operator Overloading
	int &operator[](int index)
	{
		return p[index];
	}

	// Concatenate or Add 2 Array
	Array operator+(Array &x)
	{
		int ns = size + x.size;
		Array pt(ns);
		for (int i = 0; i < size; i++)
		{
			pt[i] = p[i];
		}
		for (int j = 0; j < x.size; j++)
		{
			pt[size + j] = x.p[j];
		}
		return pt;
	}

	void print_array() const
	{
		for (int i = 0; i < size; i++)
			cout << p[i] << " ";
		cout << endl;
	}

	// Destructor
	~Array()
	{
		delete[] p;
	}
};

int main()
{

	Array a(2);
	a[0] = 10;
	a[1] = 20;

	/*
	- For Default copy constructor
	- free(): double free detected in tcache 2
	- Aborted (core dumped)
	- Now, This happened because of swallow copy done by Default copy constructor
	- We have created proper copy constructor so this should work
	*/

	// Array b = a;
	// b.print_array();

	// Array c = a + b;
	// c.print_array();

	// Using at Method

	a.at(0) = 10;
	a.at(1) = 20;

	cout << a.at(0) << endl;
	cout << a.at(1) << endl;

	// Using Overloaded Method
	/*
	a[0] = 10;
	a[1] = 20;

	cout << a[0] << endl;
	cout << a[1] << endl;
	*/

	return 0;
}