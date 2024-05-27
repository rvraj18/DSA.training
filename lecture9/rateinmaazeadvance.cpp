#include <iostream>
using namespace std;
int x[] = {0, 1, 0, -1};
int y[] = {1, 0, -1, 0}; // right down left up

bool isvalid(char maze[][6], int i, int j, int n, int m)
{
    if (i >= 0 and j >= 0 and j < m and i < n and maze[i][j] != 'X')
        return true;
    return false;
}
bool rim(char maze[][6], int i, int j, int n, int m, int sol[5][5])
{

    if (i == n - 1 and j == m - 1)
    {
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
        return true;
    }

    sol[i][j] = 1;

    for (int k = 0; k < 4; k++)
    {
        int ni = i + x[k];
        int nj = j + y[k];
        if (isvalid(maze, ni, nj, n, m) and !sol[ni][nj])
        {
            bool rasta = rim(maze, ni, nj, n, m, sol);
            if (rasta)
                return true;
        }
    }

    sol[i][j] = 0;
    return false;
}
int main()
{
    char maze[6][6] = {
        "0X000",
        "0X0X0",
        "0X0X0",
        "0X0X0",
        "000X0"};
    int sol[5][5] = {0};
    rim(maze, 0, 0, 5, 5, sol);
    return 0;
}