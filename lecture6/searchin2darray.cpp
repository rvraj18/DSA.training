
#include <iostream>

using namespace std;
void searchkey(int a[100][100], int m, int n, int key)
{
    int i;
    int j;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == key)
            { // 2d array search
                cout << "key found at:" << i << "," << j;
                break;
            }
        }
        if (j > n)
        {
            break;
        }
        if (i == m)
        {
            cout << "element not found";
            break;
        }
    }
}

int main()
{
    // 2d array initialize
    int a[100][100];
    int m, n;
    cin >> m >> n;
    int key;
    cout << "enter key";
    cin >> key;
    int no = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = no++; // 2d array input
        }
    }
    // print 2d array
    for (int i = 0; i < m; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // spiral print algo
    searchkey(a, m, n, key);
    return 0;
}