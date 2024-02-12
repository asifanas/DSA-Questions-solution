// Reverse the array
// Time Complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

void Reverse(int a[], int n, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    swap(a[start], a[end]);

    Reverse(a, n, start + 1, end - 1);
}

int main()
{
    int a[] = {1, 21, 8, 9, 3, 1, 19, 55, 15, 45, 23};
    int n = sizeof(a) / sizeof(int);
    int start = 0, end = n - 1;

    Reverse(a, n, start, end);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}