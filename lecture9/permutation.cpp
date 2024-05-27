// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
void permutation(char *a, int i)
{
    // base case
    if (a[i] == '\0')
    {
        cout << a << endl;
        return;
    }
    // recursiv case
    for (int j = i; a[j] != '\0'; ++j)
    {
        swap(a[i], a[j]);
        permutation(a, i + 1);
        swap(a[i], a[j]); // backtracking
    }
}
int main()
{
    char a[] = "abc";

    permutation(a, 0);
    return 0;
}