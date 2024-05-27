class linkedlist
{
public:
    node *head, *tail;
};
linkedlist bsttoll(node *root)
{
    // base case
    if (!root)
    {
        return {root, root};
    }
    // recursive case
    linkedlist l;
    if (!root->left and !root->right)
    {
        l.head = l.tail = root;
        return l;
    }
    // left hai right nahi hai
    else if (root->left and !root->right)
    {
        linkedlist left = bsttoll(root->right);
        left.tail->right = root;
        l.head = left.head;
        l.tail = root;
        return l;
    }
    // right hai left nhi  h
    else if (root->right and !root->left)
    {
        linkedlist right = bsttoll(root->left);
        right.tail->left = root;
        l.head = right.head;
        l.tail = root;
        return l;
    }
    // /left right dono hai
    else
    {
        linkedlist left = bsttoll(root->left);
        linkedlist right = bsttoll(root->right);
        left.tail->right = root;

        root->right = rght.head;
        l.head = left.head;
        l.tail = right.tail;
        return l;
    };
}
int main()
{
    node *root = createbst();
    printallorder(root);
    linkedlist l = bsttoll(root);
    node *temp = l.head;
    whle(temp)
    {
        cout << temp->data << "-->";
        temp = temp->right;
    }
    cout << "NULL\n";
}