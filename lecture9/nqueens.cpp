#include <iostream>
#include <string>

using namespace std;

void solve(int col, string board[], int left[], int upper[], int lower[], int n)
{
    if (col == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << board[i] << endl;
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (left[i] == 0 && lower[i + col] == 0 && upper[n - 1 + col - i] == 0)
        {
            left[i] = 1;
            lower[i + col] = 1;
            upper[n - 1 + col - i] = 1;
            board[i][col] = 'Q';
            solve(col + 1, board, left, upper, lower, n);
            left[i] = 0;
            lower[i + col] = 0;
            upper[n - 1 + col - i] = 0;
            board[i][col] = '.';
        }
    }
}

int main()
{
    int n;
    cin >> n;
    string board[n];
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    int left[n] = {0};
    int upper[2 * n - 1] = {0};
    int lower[2 * n - 1] = {0};
    solve(0, board, left, upper, lower, n);
    return 0;
}
