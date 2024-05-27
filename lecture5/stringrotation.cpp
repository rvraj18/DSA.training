#include <iostream>

using namespace std;
void rotate(char a[], int k)
{
    cout << "initial string:" << a << endl;
    // shift all bucket by k value ahead of their index
    int len = strlen(a);
    k %= len;
    int i = len - 1;
    while (i >= 0)
    {
        a[i + k] = a[i];
        i--;
    }
    cout << "after shift:" << a << endl;
    // last ke k characters utha kr suru m le aao
    int i = 0;
    int j = len;
    while (i < k)
    {
        a[i] = a[j];
        i++;
        j++;
    }
    cout << "after k char:" << a << endl;
    a[len] = '\0';
    cout << "final result:" << a << endl;
}
int main()
{
    int k;
    cin >> k;
    cin.ignore();
    char a['coding'];
}
