#include <bits/stdc++.h>
using namespace std;
class LeafSimilarTree
{
    vector<int> &v;
    void dfs(TreeNode *root)
    {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
            return;
        }
        dfs(root->left, v);
        dfs(root->right, v);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> tree1;
        vector<int> tree2;

        dfs(root1, tree1);
        dfs(root2, tree2);

        return tree1 == tree2;
    }
};
int main()
{
    /*create root*/
    TreeNode *root = new LeafSimilarTree(1);

    /* following is the tree after above statement
    1
    / \
    NULL NULL
    */
    root->left = new LeafSimilarTree(2);
    root->right = new LeafSimilarTree(3);
}