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
static int inx = -1;
Node *bulidtree(vector<int> preorder)
{

    inx++;

    if (preorder[inx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[inx]);
    root->left = bulidtree(preorder);
    root->right = bulidtree(preorder);
    return root;
}
// height of tree
int height_of_tree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftht = height_of_tree(root->left);
    int rightht = height_of_tree(root->right);
    return max(leftht, rightht) + 1;
}
// count of Node
int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_count = count(root->left);
    int right_count = count(root->right);
    return (left_count + right_count) + 1;
}
int sum_of_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_sum = sum_of_node(root->left);
    int right_sum = sum_of_node(root->right);
    return (left_sum + right_sum + root->data);
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = bulidtree(preorder);
    cout << "Height :" << height_of_tree(root) << endl;
    cout << "Count Node of Tree :" << count(root) << endl;
    cout << "Sum Of Node :" << sum_of_node(root) << endl;

    return 0;
}