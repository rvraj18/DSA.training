// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "NULL";
    }
}
node *getmiddle(node *&head)
{
    if (head == NULL)
        cout << "empty linkedlist  ";
    if (head->next == NULL)
        return head;
    else
    {
        node *slow = head;
        node *fast = head->next;
        while (slow != NULL and fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }
}
int main()
{
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    //   node* fifth =new node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    //   fifth->next=NULL;
    print(head);
    cout << endl;
    cout << getmiddle(head)->data << "is middle node";

    return 0;
}