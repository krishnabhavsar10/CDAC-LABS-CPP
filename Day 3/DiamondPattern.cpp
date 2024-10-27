#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	for (int i = 0; i < 2 * n ; i++)
	{
		int k = i;
		if (i >= n)
			k = 2 * n - i - 1;

		for (int j = 0; j < (n - k); j++)
			cout << "*";

		for (int s = 0; s < 2 * k; s++)
			cout << " ";

		for (int j = 0; j < (n - k); j++)
			cout << "*";

		cout << endl;
	}
}
