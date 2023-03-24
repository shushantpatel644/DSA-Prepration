#include <iostream>
using namespace std;
class DiameterOfBt
{
public:
    int height(struct Node *node)
    {
        // base case
        if (node == NULL)
            return 0;

        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;
        return ans;
    }
    int diameter(Node *root)
    {
        if (root == NULL)
        {
            
            return 0;
        }
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op1 = height(root->left) + height(root->right) + 1;

        int ans = max(op1, max(op2, op3));
        return ans;
        // tc = o(n^2)
        // sc =(h)
    }
};

/*
pair<int,int> diameterfast(Node *root){
    if (root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterfast(root->left);
    pair<int,int> right = diameterfast(root->right);

    int op1= left.first;
    int op2=right.first;
    int op3= left.second + right.second +1;

    pair<int,int> ans;
    ans.first = max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;
    return ans;
}
 int diameter(Node *root){
    return diameterfast(root).first;
 }
    tc=o(1)
    sc =o(h) ..o(n)
    }
    */