#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildTreesLevelWise()
{
    node *root = NULL;
    cout << "Enter data for root node: ";
    int data;
    cin >> data;
    if (data == -1)
    {
        return root;
    }

    queue<node *> q;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter children of " << temp->data << ": ";
        int leftData, rightData;
        cin >> leftData >> rightData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

    return root;
}

void inOrder(node *root)
{
    // base
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    // Your code goes here

    node *root = buildTreesLevelWise();

    inOrder(root);
    return 0;
}