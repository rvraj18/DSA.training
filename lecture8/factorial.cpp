#include <iostream>
using namespace std;
int fact(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive case n* fact(n-1);
    int smallproblem = fact(n - 1);
    int bigproblem = n * smallproblem;
    return bigproblem;
}
int main()
{
    int n;
    cin >> n;
    fact(n);
    cout << fact(n);
    return 0;
}