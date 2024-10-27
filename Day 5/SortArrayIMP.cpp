#include <iostream>
using namespace std;

void print_array(double *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}

void merge(double *a, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = a[left + i];

    for (int j = 0; j < n2; ++j)
        R[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            ++i;
        }
        else
        {
            a[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
    {
        a[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2)
    {
        a[k] = R[j];
        ++j;
        ++k;
    }

    delete[] L;
    delete[] R;
}

void merge_sort(double *s, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        merge_sort(s, left, mid);
        merge_sort(s, mid + 1, right);

        merge(s, left, mid, right);
    }
}

int main()
{
    int n{};

    cout << "Enter count of numbers: ";
    cin >> n;

    double *s = new double[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    cout << "Initial array: ";
    print_array(s, n);

    cout << "Final sorted array: ";

    merge_sort(s, 0, n - 1);

    print_array(s, n);

    delete[] s;
}