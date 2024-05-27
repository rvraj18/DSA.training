#include <iostream>
using namespace std;

int bs(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        int m = s + e / 2;

        if (arr[m] == key)
            return m;

        else if (arr[m] < key)
            s = m + 1;

        else
            e = m - 1;
    }

    return -1;
}

int main()
{

    int arr[5] = {23, 45, 56, 78, 90};
    int key;
    cin >> key;

    int n = sizeof(arr) / sizeof(int);

    cout << bs(arr, n, key);

    return 0;
}