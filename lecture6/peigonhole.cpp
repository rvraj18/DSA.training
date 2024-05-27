

#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    int csum[n];
    csum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        csum[i] = (csum[i - 1] + a[i]) % 5;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout<<csum[i]<<" ";
    // }
    int frequency[100] = {0};
    frequency[0] = 1; // because of empty sub array
    for (int i = 0; i < n; i++)
    {
        int val = csum[i];
        frequency[val]++;
    }
    // lets find ansewerr
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (frequency[i] * (frequency[i] - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}