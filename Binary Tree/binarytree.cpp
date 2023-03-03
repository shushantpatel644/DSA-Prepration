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
        this->data - d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for left tree: " << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for right tree: " << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelorderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        // cout << temp->data << " ";
        q.pop();

        if (temp == NULL)
        { // purane level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order traversal
    // cout << "Printing the level order traversal output" << endl;
    // levelorderTraversal(root);
    cout << "inorder traversal is:";
    inorder(root);

    cout << endl
         << "preorder traversal is:";
    preorder(root);

    cout << endl
         << "postorder traversal is:";
    postorder(root);
    return 0;
}