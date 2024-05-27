#include <bits/stdc++.h>
using namespace std;
void printarray(int a[][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
void transpose(int a[][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
}
int main()
{
    int a[100][100];
    int row;
    int col;
    cin >> row >> col;
    int number = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = number++;
        }
    }
    printarray(a, row, col);
    transpose(a, row, col);
    printarray(a, row, col);
    return 0;
}