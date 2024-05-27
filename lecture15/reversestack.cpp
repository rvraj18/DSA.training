// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int> &s, int top)
{
    if (s.empty())
    {
        s.push(top);
        return;
    }

    int t = s.top();
    s.pop();
    insertatbottom(s, top);
    s.push(t);
}
void reversestack(stack<int> s)
{
    // base case
    if (s.empty())
        return;

    // recursive case

    int top = s.top();
    s.pop();
    // recusrion ko bpolo chhotee stack ko reverse krdo
    reversestack(s);
    // top ko stack k end m insert krna h

    insertatbottom(s, top);
}
void printstack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    printstack(s);
    cout << endl;
    reversestack(s);
    printstack(s);

    return 0;
}