class Solution {
public:
int getLength(ListNode *l)
{
    int len = 0;
    while (l)
        len++, l = l->next;
    return len;
}
int solve1(ListNode *h1, ListNode *h2)
{
    if (!h2) return 0;
    int carry = solve1(h1->next, h2->next);

    h1->val += h2->val + carry;
    carry = h1->val / 10;
    h1->val %= 10;
    return carry;
}

int solve2(ListNode *h1, ListNode *end)
{
    if (h1 == end)
        return 1;
    int carry = solve2(h1->next, end);

    h1->val += carry;
    carry = h1->val / 10;
    h1->val %= 10;
    return carry;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1=getLength(l1),len2=getLength(l2);

        if(len2>len1)
            swap(len1,len2),swap(l1,l2);
    
        ListNode* next1=l1,*prev=l1,*next2=l2;
        while(next2)
            next1=next1->next,next2=next2->next;
        while(next1)
            prev=prev->next,next1=next1->next;
        
        ListNode* head=l1;

        if(solve1(prev,l2))
            if(solve2(l1,prev))
                head=new ListNode(1),head->next=l1;
            return head;
    }
};