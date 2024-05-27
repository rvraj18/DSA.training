#include <iostream>
#include <queue>
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
node *insertinBST(node *root, int data)
{
    if (!root)
    {
        root = new node(data);
        return root;
    }
    if (data > root->data)
    {
        // root ke RST par data insert krke merko root node return krde RST ki
        root->right = insertinBST(root->right, data);
    }
    else
    {
        root->left = insertinBST(root->left, data);
    }
    return root;
}
node *createBST()
{
    node *root = NULL;
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertinBST(root, data);
        cin >> data;
    }
    return root;
}
void printlevelorder(node *root)
{
    queue<node *> q;
    if (!root)
        return;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *x = q.front();
        q.pop();
        if (x)
        {
            cout << x->data << " ";
            if (x->left)
                q.push(x->left);
            if (x->right)
                q.push(x->right);
        }

        else
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
    }
}
bool isbst(node *root, int mi = INT_MIN, int mx = INT_MAX)
{
    if (!root)
        return true;
    bool isleft = isbst(root->left, mi, root->data);
    bool isright = isbst(root->right, root->data, mx);
    if (root->data >= mi and root->data <= mx and isleft and isright)
    {
        return true;
    }
    return false;
}
void inorderrange(node *root, int k1, int k2)
{
    // base case
    if (!root)
        return;

    inorder(root->left, k1, k2);
    if (root->data >= k1 and root->data <= k2)
    {
        cout << root->data << " " << endl;
    }
    inorder(root->right, k1, k2);
}
int height(node *root)
{
    if (!root)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}
bool isbalanced(node *root)
{
    if (!root)
        return true;
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    if (abs(leftheight - rightheight) <= 1 and isbalanced(root->left) and isbalanced(root->right))
        return true;

    int isbalanced(node * root)
    {
        if (!root)
            return 0;

        int l = isbalanced(root->left);
        if (l == -1)
            return -1;

        int r = isbalanced(root->right);
        if (r == -1)
            return -1;

        if (abs(l - r) > 1)
            return -1;

        return max(l, r) + 1;
    }
    node *arraytobst(int *a, int s, int e)
    {
        if (s > e)
            return NULL;
        int m = (s + e) / 2;
        node *root = new node(a[m]);
        root->left = arraytobst(a, s, m - 1);
        root->right = arraytobst(a, m + 1, s);
        return root;
    }
}
int main()
{
    node *root = createBST();
    inorderrange(root, k1, k2);
    return 0;
}