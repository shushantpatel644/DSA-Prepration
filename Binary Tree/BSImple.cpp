#include <iostream>
// #include <algorithm>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
// node trh ka addres return krega
node *newNode(int data)
{
    node *ele = new node();
    ele->data = data;
    ele->left = NULL;
    ele->right = NULL;
    return ele;
}
// node* newNode(int data){
//     node* node = new struct node();
//     node->data=data;
//     node->left=NULL;
//     node->right=NULL;
//     return node;
// }
void printBS(node *n)
{
    while (n != NULL)
    {
        cout << n->data << "";
        n = n->left;
    }
    cout << endl;
}

int main()
{
    // make  root node
    node *root = newNode(1);

    /*
        1
       /  \
    NULL   NULL

    */
    root->left = newNode(2);
    /*
        1
       /  \
      2   NULL
    /   \
  NULL  NULL

    */
    root->right = newNode(3);
    root->left->left = newNode(4);

    printBS(root);
}