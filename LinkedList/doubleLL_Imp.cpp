#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void printList(node *n)
{
    int count = 0;
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
        count++;
    }
    cout << "No. of elements in doubly linked list is :" << count << endl;
}

void push(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
    {
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}

void insertAfter(node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "Given prev. node can't be null" << endl;
        return;
    }
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = prev_node->next;

    prev_node->next = new_node;
    new_node->prev = prev_node;

    if (new_node->next1 != NULL)
    {
        new_node->next->prev = new_node;
    }
}

//inset at last
void append(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = NULL;

    node *last = *head_ref;
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;

    return;
}
int main()
{
    node *head = NULL;
    push(&head, 3);
    push(&head, 5);
    push(&head, 9);

    insertAfter(head->next, 10);
    printList(head);
}
