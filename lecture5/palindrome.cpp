#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch[1000];
    cin >> ch;
    int length = strlen(ch);
    int i = 0;
    int j = length - 1;
    bool palindrome = true;
    while (i < j)
    {
        if (ch[i] != ch[j])
        {
            cout << "not palindrome";

            palindrome = false;
            break;
        }
        i++;
        j--;
    }
    if (palindrome)
        cout << "palindrome";
}