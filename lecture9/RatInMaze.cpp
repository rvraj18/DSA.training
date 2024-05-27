#include <iostream>
using namespace std;
bool ratinmaze(char maze[][5], int i, int j, int n, int m, int sol[][5])
{
    // base case
    if (i == n - 1 and j == m - 1)
    {
        // destination bhi sol ka part hoga
        sol[i][j] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return false;
    }
    // recursive case
    // 1.jis cell pe khade ho use sol ka part maanlo
    sol[i][j] = 1;
    // 2.right jaa sakte hain to jaakar check karo
    if (j + 1 < m and maze[i][j + 1] != 'X')
    {
        bool kyarightseraastamila = ratinmaze(maze, i, j + 1, n, m, sol);
        if (kyarightseraastamila == true)
            return true;
    }
    // 3.neeche jaa sakte hain to neeche jaa ke check karo
    if (i + 1 < n and maze[i + 1][j] != 'X')
    {
        bool kyaneecheseraastamila = ratinmaze(maze, i + 1, j, n, m, sol);
        if (kyaneecheseraastamila)
            return true;
    }
    // 4.right and neeche kahin se raasta nahin mila to
    // current cell sol ka part nhi ho sakta
    sol[i][j] = 0; // backtracking
    return false;
}
int main()
{
    char maze[][5] = {
        "0000",
        "00XX",
        "0000",
        "XX00"};
    int sol[5][5] = {0};
    ratinmaze(maze, 0, 0, 4, 4, sol);

    return 0;
}