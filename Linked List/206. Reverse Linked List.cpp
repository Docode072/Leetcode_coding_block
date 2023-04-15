ListNode* reverseList(ListNode* head) {
       ListNode* prev = NULL , * curr = head , * temp = NULL;
       while(curr){
           temp = curr->next;
           curr->next = prev;
           prev = curr;
           curr = temp;

       }
       return prev;
    }
