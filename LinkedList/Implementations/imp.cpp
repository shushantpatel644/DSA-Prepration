/*
1) insert at the beginning o(1)

ptr->next=head;
head=ptr;
return head;

2) insert in between o(n)

ptr->next = p->next;
p->next=ptr;

3) insert a the end o(n)

p->next =ptr;
ptr->next=NULL;

4) inset after a node o(n)

ptr->next=q->next;
q->next=ptr;

*/