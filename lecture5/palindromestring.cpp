#include <iostream>
#include <cstring>

using namespace std;
int countpalindrome(char *a)
{
    int len = strlen(a);
    int i, j, cnt = 0;
    for (int centre = 0; centre < len; centre++)
    {
        // checking odd length
        i = j = centre;
        while (i >= 0 and j < len)
        {
            if (a[i] == a[j])
                cnt++;
            else
                break;
            i--;
            j++;
        }
        i = centre;
        j = centre + 1;
        while (i >= 0 and j < len)
        {
            if (a[i] == a[j])
                cnt++;
            else
                break;
            i--;
            j++;
        }
    }
    return cnt;
}

int main()
{
    char a[1000] = "aaa";
    cout << countpalindrome(a);

    return 0;
}
