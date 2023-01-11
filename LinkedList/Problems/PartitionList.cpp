#include<bits/stdc++.h>
using namespace std;

class PartitionList
{
private:
public:
    ListNode *Partition(ListNode *head, int x)
    {
        ListNode *left_head = new ListNode();
        ListNode *right_head = new ListNode();

        ListNode *left = leaf_head;
        ListNode *right = right_head;

        while (head)
        {
            if (head->val < x)
            {
                left->next = head;
                left = left->next;
            }
            else
                [right->next = head;
                    right = right->next;
                ] head = head->next;
        }
        right->next = head;
        left->next = right_head->next;

        return left_head->next;
    }
};

int main(){
    ListNode* 
}