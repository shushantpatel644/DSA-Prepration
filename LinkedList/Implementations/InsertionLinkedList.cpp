// begining

ptr->next = head;
ptr->data = data;
return head;

// at an index

int i = 0;
while (i != index - 1)
{
    p = p->next;
    i++;
}
ptr->data = data;
ptr->next = p->next;
p->next = ptr;
return head;

// inset at end

while (p->next != NULL)
{
    p = p->next;
}
p->next = ptr;
ptr->next = NULL;
return head;

// insert after a node
ptr->next = prevNode->next;
prevNode->next = ptr;
return head;
