#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int indx = -1;
Node *bulidtree(vector<int> preorder)
{
    indx++;

    if (preorder[indx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[indx]);
    root->left = bulidtree(preorder);
    root->right = bulidtree(preorder);
    return root;
}
// Preorder Traversal

void preOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
// Inorder Traversal
void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = bulidtree(preorder);
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;

    return 0;
}