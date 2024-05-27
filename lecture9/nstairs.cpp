
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int nstairs(int n)
{
    // base  case
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    // recursive case
    return nstairs(n - 1) + nstairs(n - 2) + nstairs(n - 3);
}

int nstairs1(int n, int k)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += nstairs1(n - i, k);
    }
    return ans;
}

int main()
{
    int k = 3;
    int n = 5;
    nstairs(n);
    cout << nstairs(n) << endl;

    cout << nstairs1(n, k);
}