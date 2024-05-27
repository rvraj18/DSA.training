#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    int a[] = {1, 2, 3, 4, 5};
    int i = 0;
    int j = n - 1;
    while (i < j)
    {

        swap(a[i], a[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
