void reorderList(ListNode* head) {
        if(!head) return;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        fast = slow->next;   // find the middle of the list
        slow->next = NULL;   // and set the end of the first list as NULL
        slow = fast;         // set "slow" as the head of the second list
        
        ListNode* pre = NULL; // reverse the second list, its head becomes "pre"
        while(slow){
            ListNode* temp = slow->next;
            slow->next = pre;
            pre = slow;
            slow = temp;
        }
        
        ListNode* l1 = head;  //set l1 as the head of the first list
        ListNode* l2 = pre;   //set l2 as the head of the reverse second list and combine them
        while(l1 && l2){
            ListNode* temp1 = l1->next;
            ListNode* temp2 = l2->next;
            l1->next = l2;
            l2->next = temp1;
            l1 = temp1;
            l2 = temp2;
        }


        with O(n) time and O(1) space
    }