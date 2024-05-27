// sum of max sub array
#include <iostream>
using namespace std;
int fibo(int n)
{
    // base case
    if (n == 0 || n == 1)
        return n;
    int cp1 = fibo(n - 1);
    int cp2 = fibo(n - 2);
    int bp = cp1 + cp2;
    return bp;
}
int main()
{
    int n;
    cin >> n;
    fibo(n);
    cout << fibo(n);
    return 0;
}