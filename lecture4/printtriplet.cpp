// to print triplet whose sum is 0 and avoid duplicacy
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {-5, -2, -1, 0, 1, 2, 3};
    int n = sizeof(a) / sizeof(int);
    sort(a, a + n);

    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < n - 1; j++)
        {
            if (j - 1 > i && a[j] == a[j - 1])
            {
                continue;
            }
            for (int k = j + 1; k < n; k++)
            {

                if (a[i] + a[j] + a[k] == 0)
                {
                    if (k - 1 > j && a[k] == a[k - 1])
                    {
                        continue;
                    }
                    cout << a[i] << "," << a[j] << "," << a[k];
                    cout << endl;
                }
            }
        }
    }

    return 0;
}