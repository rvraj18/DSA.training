#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;

    cin >> n;
    cin.ignore(); // to ignore one space ya one enter
    int max_len = 0;
    char ch[1000], largest[1000];

    for (int i = 0; i < n; i++)
    {
        cin.getline(ch, 1000); // if jo input kri string wo badi hai avi tk sari
        // string se to usse store krlo
        int current_len = strlen(ch); // in built fumction for finding length
        if (current_len > max_len)
        {
            // update krdo largest wale array ko with current string
            strcpy(largest, ch); // inbuilt function to copy string
            // and largest wale ki length is in max length in max_len
            // we have to update max len as  welll
            max_len = current_len;
        }
    }
    cout << largest << endl
         << max_len;

    return 0;
}
