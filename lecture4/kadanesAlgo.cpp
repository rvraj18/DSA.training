// sum of max sub array
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, -4, 6, 10, 2, -2, 3, -100, 5, 4};
    int n = sizeof(a) / sizeof(int);
    int max_sum = 0;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += a[i];
        max_sum = max(max_sum, ans);
        if (ans < 0)
        {
            ans = 0;
        }
    }
    cout << "max_sum:" << max_sum;
    return 0;
}