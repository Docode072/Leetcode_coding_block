// first approach
ListNode* partition(ListNode* head, int x) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        vector<int>v1;
        for(int i = 0; i< v.size() ; i++){
            if(v[i]>= x){
                v1.push_back(v[i]);
                v.erase(v.begin()+i);
                i--;
            }
        }
        for(int i = 0 ; i< v1.size(); i++){
             v.push_back(v1[i]);

        }
        ListNode* root = NULL;
        for(int i = v.size()-1 ; i>=0 ; i--){
            ListNode* temp = new ListNode();
            temp->val = v[i];
            temp->next = root;
            root = temp;
        }

        return root;
        

        
    }

// second and optimal approach

ListNode* partition(ListNode* head, int x) {
        
        ListNode* small = new ListNode(-1);// small linklist dummy node
        ListNode* big = new ListNode(-1);// big linklist dummy node;

        ListNode* smallhead = small;
        ListNode* bighead = big;

        while(head){
            if(x > head->val){
                small->next = head;
                small= small->next;
                head = head->next;
                small->next = nullptr;
            }
            else{
                big->next = head;
                big = big->next;
                head = head->next;
                big->next = nullptr;
            }
        }
        small->next = bighead->next;

        return smallhead->next;
    }
