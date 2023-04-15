ListNode* swapPairs(ListNode* head) {
       ListNode* tmp = head;
       while(tmp and tmp->next){
           swap(tmp->next->val , tmp->val);
           tmp = tmp->next->next;
       }
       return head;
    }
