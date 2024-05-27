#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printLL(node *&head)
{
    // temp ek variable ko head bnao
    node *temp = head;
    // return tb krna h jb head null ho jaaye
    while (temp != NULL)
    {
        // print krte rho
        cout << temp->data << "->";
        // head ko aage bdha do
        temp = temp->next;
    }
    if (temp == NULL)
        cout << "NULL";
}
int main()
{

    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth = new node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // fifth->next=NULL;

    printLL(first);

    return 0;
}