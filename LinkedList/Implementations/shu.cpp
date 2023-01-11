#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printList(node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}
int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 5;
    head->next = second;

    head->data = 3;
    head->next = third;

    head->data = 1;
    head->next = NULL;

    printList(head);
    // node *head = new node();v
    // int *ptr = new int;
    // int a;
}