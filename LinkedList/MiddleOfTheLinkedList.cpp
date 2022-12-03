/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode* head){
        int slow = 0;
        while(head!=NULL){
            slow++;
            head=head->next;
        }
        return slow;
    }
    ListNode* middleNode(ListNode* head) {
        int len = getLength(head);
        int ans = (len/2);
        
        ListNode* temp = head;
        int count=0;
        while(count<ans){
            temp=temp->next;
            count++;
        }
        return temp;
    }
};