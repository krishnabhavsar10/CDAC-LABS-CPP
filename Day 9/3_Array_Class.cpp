#include <iostream>
using namespace std;

class Array
{
private:
	int *p;	  // Stores the Base Address of Array
	int size; // Store the size of the array

public:
	Array() : p(nullptr), size(0)
	{
		cout << "CTOR DEF CALLED" << endl;
	}

	Array(int size)
	{
		cout << "CTOR PARAM CALLED" << endl;
		this->size = size;
		p = new int[size];
	}

	~Array()
	{
		cout << "DTOR CALLED" << endl;
		delete[] p;
	}

	void accept_array()
	{
		cout << "Enter Elements: ";
		for (int i = 0; i < size; i++)
		{
			cin >> p[i];
		}
	}

	void display_array()
	{
		cout << "Elements: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << p[i];
		}
	}
};

int main()
{
	Array a;
	a.display_array();
	return 0;
}
