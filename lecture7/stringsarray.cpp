#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[10] = {
        "hello"
        "world"
        "coding"
        "hello world"};
    int n = 4;
    // nested loop
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < s[row].size(); col++)
        {
            cout << s[row][col] << " ";
        }
        cout << endl;
    }
    string largest = "";
    for (int i = 0; i < n; i++)
    {
    }
    return 0;
}