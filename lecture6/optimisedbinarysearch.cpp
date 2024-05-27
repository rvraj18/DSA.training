#include <iostream>
using namespace std;

int findpivot(int *a, int n)
{
    int s = 0;
    e = n - 1;
    if (a[s] <= a[e])
        return 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (mid - 1)
            >= 0 and a[mid] < a[mid - 1] return mid;
        else if (a[mid] >= a[n - 1] and a[s] < a[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return s;
}

int main()
{

    int arr[5] = {20, 22, 24, 26, 30, 1, 6, 10};

    int n = sizeof(arr) / sizeof(int);

    int ans = findpivot(a, n)

        return 0;
}