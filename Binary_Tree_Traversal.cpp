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
// PostOrder
void postOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
// level order
void levelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL); // Marker for the end of the first level

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            // End of a level
            if (!q.empty())
            {
                // If there are more nodes, push a new marker
                q.push(NULL);
                cout << endl;
            }
        }
        else
        {
            cout << curr->data << " ";
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}
// top view of Binary Tree
void topview(Node *root)
{
    queue<pair<Node *, int>> q; //(node.HD)
    map<int, int> m;

    q.push({root, 0});

    while (q.size() > 0)
    {
        Node *curr = q.front().first;
        int currHD = q.front().second;
        q.pop();
        if (m.find(currHD) == m.end())
        {
            m[currHD] = curr->data;
        }
        if (curr->left != NULL)
        {
            q.push({curr->left, currHD - 1});
        }

        if (curr->right != NULL)
        {
            q.push({curr->right, currHD + 1});
        }
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = bulidtree(preorder);
    /* preOrder(root);
     cout << endl;
     inOrder(root);
     cout << endl;
     postOrder(root);
     cout << endl;
     levelOrder(root);
     cout << endl;*/
    topview(root);
    return 0;
}