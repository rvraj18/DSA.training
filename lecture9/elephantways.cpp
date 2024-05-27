#include <iostream>
using namespace std;
int elephantways(int n, int m)
{
    // base case
    if (n == 0 and m == 0)
        return 1;
    if (n < 0 || m < 0)
        return 0;
    // recursve case
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += elephantways(i, m);
    }
    for (int i = 0; i < m; i++)
    {
        ans += elephantways(n, i);
    }
    return ans;
}
int main()
{
    int n = 3;
    int m = 3;
    elephantways(n, m);
    cout << elephantways(n, m);
    return 0;
}