#include <iostream>
using namespace std;

void merge(int *a, int *b, int *c, int s, int e)
{
    int m = (s + e) / 2;
    int i = s, j = m + 1, k = s; // Initialize i, j, and k
    while (i <= m && j <= e)
    {
        if (b[i] <= c[j])
        {                    // Compare elements of b and c
            a[k++] = b[i++]; // Copy element from b to a
        }
        else
        {
            a[k++] = c[j++]; // Copy element from c to a
        }
    }
    // Copy the remaining elements of b or c, if any
    while (i <= m)
    {
        a[k++] = b[i++];
    }
    while (j <= e)
    {
        a[k++] = c[j++];
    }
}

void mergesort(int *a, int s, int e)
{
    // base case
    // if s==e than array is sorted
    if (s >= e)
        return;
    // recursive case
    // 1 \.divide
    int b[100], c[100];
    int m = (s + e) / 2;
    for (int i = s; i <= m; ++i)
    {
        b[i] = a[i];
    }
    for (int i = m + 1; i <= e; ++i)
        c[i] = a[i];
    mergesort(b, s, m);
    mergesort(c, m + 1, e);
    merge(a, b, c, s, e);
}

int main()
{
    int a[] = {5, 4, 1, 3, 2, 0};
    int n = sizeof(a) / sizeof(int);

    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}