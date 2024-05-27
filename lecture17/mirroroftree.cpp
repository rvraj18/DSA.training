

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

node *createtree()
{
    node *root = NULL;
    int data;
    cin >> data;
    if (data == -1)
        return root;

    root = new node(data);
    // create lst
    root->left = createtree();

    // create rst
    root->right = createtree();

    return root;
}

void preorder(node *root)
{
    // base case
    if (!root)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    // base case
    if (!root)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(node *root)
{
    // base case
    if (!root)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int countnodes(node *root)
{
    // base case
    if (!root)
        return 0;
    // recursive code
    return countnodes(root->left) + countnodes(root->right) + 1;
}
// 8 10 1 -1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14
int height(node *root)
{
    // base case
    if (!root)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}
node *findnode(node *root, int key)
{
    // base case
    if (!root || root->data == key)
        return root;
    node *l = findnode(root->left, key);
    if (l)
        return l;
    return findnode(root->right, key);
}
void mirror(node *root)
{
    if (!root)
        return;
    swap(root->left, root->right);
    mirror(root->right);
    mirror(root->left);
}
int main()
{
    node *root = createtree();

    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;

    inorder(root);
    cout << endl;
    cout << "total nodes is :" << countnodes(root) << endl;
    ;
    cout << "total height is :" << height(root);
    node *ans = findnode(root, 14);
    if (ans)
    {
        cout << "found";
    }
    else
        cout << "not found ";
    return 0;
}