
#include <iostream>

using namespace std;
void staircaseSerch(int a[][100], int m, int n, int key)
{
    int i = 0;
    int j = n - 1;
    bool flag = false;
    while (i < n && j >= 0)
    {
        if (a[i][j] == key)
        {
            cout << "key found at:" << i << " " << j;
            flag = true;
            break;
        }
        else if (a[i][j] < key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if (flag == false)
    {
        cout << "key  not found";
    }
}

void staircaseSerch1(int a[][100], int m, int n, int key)
{
    int i = 0;
    int j = n - 1;
    while (i < n && j >= 0)
    {
        if (a[i][j] == key)
        {
            cout << "key found at:" << i << " " << j;
            return;
        }
        else if (a[i][j] < key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "key  not found";
}
int main()
{
    // 2d array initialize
    int a[][100] = {
        {1, 2, 4, 5},
        {3, 7, 15, 20},
        {6, 16, 18, 22},
        {10, 17, 24, 28},

    };
    int n, m;
    n = m = 4;
    int key;
    cout << "enter the value of key:";
    cin >> key;
    staircaseSerch1(a, m, n, key);

    return 0;
}