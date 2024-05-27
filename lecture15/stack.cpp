// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;
void nextsmaller(int *a, int n)
{
    stack<int> s;
    int ns[1000];
    ns[n - 1] == -1;
    s.push(n - 1);
    for (int i = n - 2; i >= 0; --i)
    {
        while (!s.empty() and a[i] <= a[s.top()])
            s.pop();
        if (!s.empty())
            ns[i] = s.top();
        else
            ns[i] = -1;
        s.push(i);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << ns[i] << " ";
    }
}
int main()
{
    int n = 6;
    int a[n] = {5, 3, 4, 9};
    nextsmaller(a, n);
    return 0;
}