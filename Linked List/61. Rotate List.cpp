ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
       int n = 0 ;
       ListNode* temp = head;
       while(temp){
           n++;
           temp = temp->next;
       }
       int shift = (n-k%n)-1;
       temp = head;
       while(shift--){
           temp= temp->next;
       }
       ListNode* nhead;
       ListNode* last = temp;
       while(temp->next){
           temp = temp->next;
       }
       temp->next = head;
       nhead = last->next;
       last->next = NULL;
       
       return nhead;



    }
