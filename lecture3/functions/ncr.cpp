#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n;
    cin >> n;
    int r;
    cin >> r;
    int ans = combination(n, r);
    cout << ans;
    return 0;
}