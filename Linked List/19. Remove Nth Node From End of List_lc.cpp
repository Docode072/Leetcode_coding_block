ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        if(n == 1 and head->next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp->next;
        }
        int k = size-n-1;
        if(size == n) return head->next;
        temp = head;
        while(temp and k--){
            temp= temp->next;
        }
        temp->next = temp->next->next;

        return head;
    }
