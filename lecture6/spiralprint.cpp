#include <iostream>

using namespace std;

void spiralprint(int a[100][100], int m, int n)
{
    // 1.pehel creat required variables
    int sr = 0;
    int sc = 0;
    int er, ec;
    er = m - 1;
    ec = n - 1;
    // 2.algorithm
    while (sr <= er && sc <= ec)
    {
        // 1,=.print sr from sc to ec
        for (int col = sc; col <= ec; col++)
        {
            /* code */
            cout << a[sr][col] << " ";
        }

        sr++;

        // 2.print ec from sr to er
        for (int row = sr; row <= er; row++)
        {
            /* code */
            cout << a[row][ec] << " ";
        }

        ec--;
        // 3.print er from ec to sc
        if (sr < er)
        {
            for (int col = ec; col >= sc; col--)
            {
                /* code */
                cout << a[er][col] << " ";
            }

            er--;
        }
        // 4.print sc from er to sr
        if (sc < ec)
        {
            for (int row = er; row >= sr; row--)
            {
                /* code */
                cout << a[row][sc] << " ";
            }

            sc++;
        }
    }
}

int main()
{
    // 2d array initialize
    int a[100][100];
    int m, n;
    cin >> m >> n;
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
    spiralprint(a, m, n);
    return 0;
}