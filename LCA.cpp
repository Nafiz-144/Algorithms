#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL)
            return NULL;
        if (root->val == p->val || root->val == q->val)
            return root;

        TreeNode *lla = lowestCommonAncestor(root->left, p, q);
        TreeNode *rl = lowestCommonAncestor(root->right, p, q);

        if (lla && rl)
            return root;
        else if (lla != NULL)
            return lla;
        else
            return rl;
    }
};