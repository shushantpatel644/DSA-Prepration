

/*
p=head;
while(p->next!=head){
    p=p->next;
}
p->data; //last node


using do loop
do{
    p->data;
    p=p->next;
}while(p!=head)


 __    __
|__|  |__|

 __    __
|__|  |__|

 __    __
|__|  |__|
*/

// dynamic linked list creation

struct node *first = NULL;
struct node *second = NULL;

/* Dynamic memory allocation */

first = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));

first->data_element = 10; // Assigning data to the first node
first->next = second;     // Linking the first node with the second node

second->data_element = 20; // Assigning data to the second node
second->next = head;       // Since third is the last node, it does not point to any other data element.
// NULL denotes the termination of the linked list

void linkedlist(struct Node *head)
{
    // struct Node *ptr = head;
    // ptr->data;
    // ptr=ptr->next;
    // while (ptr->next != head)
    // {
    //     ptr = ptr->next;
    // }
    // ptr->data;

    struct Node *ptr = head;
    do
    {
        ptr->data;
        ptr = ptr->next;
    } while (ptr != head)
}

//insertion in linked list
