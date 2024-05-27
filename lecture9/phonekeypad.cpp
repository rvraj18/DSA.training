#include <iostream>
using namespace std;
string keys[] = {
    "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void phonekeypad(char *ip, int i, char *op, int j)
{
    // base case
    if (ip[i] == '\0')
    {
        op[j] = '\0';
        cout << op << endl;
        return;
    }
    // recursive case
    int d = ip[i] - '0';
    for (int k = 0; k < keys[d].size(); ++k)
    {
        op[j] = keys[d][k];
        phonekeypad(ip, i + 1, op, j + 1);
    }
}

int main()
{

    char ip[] = "23";
    char op[100];
    phonekeypad(ip, 0, op, 0);
    return 0;
}