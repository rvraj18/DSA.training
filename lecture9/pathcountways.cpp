v #include<bits / stdc++.h> using namespace std;
int pathcount(int i, int j, int n)
{
    if (i > n || j > n)
        return 0;
    if (i == n - 1 && j == n - 1)
        return 1;

    int down = pathcount(i + 1, j, n);
    int right = pathcount(i, j + 1, n);
    return down + right;
}
int main()
{
    int n;
    cin >> n;
    cout << pathcount(0, 0, n);
    return 0;
}