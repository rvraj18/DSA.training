#include <iostream>
#include <cstring>
using namespace std;

void reversestring(char a[], int i, int j)
{
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

int main()
{
    char a[] = "coding";
    int len = strlen(a);
    int k = 4;
    k %= len;
    reversestring(a, len - k, len - 1);
    reversestring(a, 0, len - k - 1);

    reversestring(a, 0, len - 1);
    cout << a << endl;
    return 0;
}
