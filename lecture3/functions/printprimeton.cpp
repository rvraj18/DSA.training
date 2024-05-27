// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void printprime(int n)
{
    for (int num = 2; num <= n; num++)
    {
        bool isprime = true;
        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << num << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    printprime(n);
    return 0;
}
