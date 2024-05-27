

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
void printlevelorder(node *root)
{
    queue<node *> q;
    if (!root)
        return;
    q.push(root);
    q.push(NULL);
    while (!q.empty)
    {
        node *x = q.front();
        q.pop();
        if (x)
        {
            cout << x->data << ":";
            if (x->left)
                q.push(x->left);
            if (x->right)
                q.push(x->right);
        }
        else
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}
node *createtree(int *inorder, int s, int e, int *preorder, int &i)
{
    // base case
    if (s > e)
        return NULL;

    // recursive case
    int d = preorder[i++];
    node *root = new node(d);
    int k = -1;
    for (int j = s; j <= e; j++)
    {
        if (inorder[j] == d)
        {
            k = j;
            break;
        }
    }
    root->left = createtree(inorder, s, k - 1, preorder, i);
    root->right = createtree(inorder, s, k + 1, preorder, i);
    return root;
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
    printlevelorder(root);

    return 0;
}