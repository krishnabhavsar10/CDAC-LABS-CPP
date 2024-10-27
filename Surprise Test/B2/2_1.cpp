#include <iostream>
using namespace std;

int binequi(int n)
{
    int result = 0;
    int place = 1;                   // Keeps track of the place value (1, 10, 100, etc.)

    while (n > 0)
    {
        int remainder = n % 2;       // Get the least significant bit
        result += remainder * place; // Add it to the result at the correct place value
        place *= 10;                 // Move to the next place value
        n /= 2;                      // Reduce n by dividing by 2
    }

    return result;
}

int main()
{
    int a;
    cout << "Enter Number to convert to binary: ";
    cin >> a;
    cout << "Binary Equivalent: " << binequi(a) << endl;
    return 0;
}