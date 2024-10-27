#include <iostream>
using namespace std;

void reverse(char s[], int start, int end)
{
    if (start >= end)
        return;
    swap(s[start], s[end]);
    reverse(s, ++start, --end);
}

int main()
{
    char str[] = "Hello";
    int len = sizeof(str) / sizeof(str[0]);

    cout << str << endl;
    reverse(str, 0, len - 2);
    cout << str << endl;

    return 0;
}
