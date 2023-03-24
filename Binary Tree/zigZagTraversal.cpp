#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class solution
{
public:
    int Node;
    vector<int> zigzigTraversal(Node *root)
    {
        vector<int> result;
        if (root == NULL)
            return result;

        queue<Node *> q;
        q.push(root);

        bool lefttoRight = true;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> ans(size);

            // level processs
            for (int i = 0; i < n; i++)
            {
                Node *frontNode = q.front();
                q.pop();

                // normal traversal or reverse traversal insert
                int index = lefttoRight ? i : size - i - 1;
                ans[index] = frontNode->data;

                if (frontNode->left)
                    q.push(frontNode->left);
                if (frontNode->right)
                    q.push(frontNode->right);
            }
            lefttoRight = !lefttoRight

                          for (auto i : ans)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
int main()
{
}
