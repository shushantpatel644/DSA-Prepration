#include <iostream>
using namespace std;

/*-----------Linked List Node------------------*/

struct node
{
    int data;
    node *next;
};
/* print the linked list*/

void printList(node *n)
{
    int count = 0;
    while (n != NULL)
    {
        cout << n->data >> endl;
        n = n->next;
        count++;
    }
    cout << "No of element in linked list is: " << count << endl;
}
// node *pushFront(node *head, int newData)
// {
//     node *newNode = new node();
//     newNode->data = newData;
//     newNode->next = head;
//     head = newNode;
//     return head;
// }
void pushFront(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
}
int main()
{
    node *head = NULL;
    // head = pushFront(head, 5);
    // head = pushFront(head, 6);
    pushFront(&head, 5);
    pushFront(&head, 6);
    pushFront(&head, 10);
    printList(head);
}
