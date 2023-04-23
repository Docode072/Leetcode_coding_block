// all order(in , pre , post) in one function

vector<int> postorderTraversal(TreeNode* root) {
        /* 
         stack<TreeNode* , int>st;     st(root, state);
        1--> pre  || 2--> postorder. || 3-->inorder
        three step for every order
        
        if(st.top()->second == 1) --> a) push into pre order
                                     b)increment state ie. st.top()+1;
                                     c) go to left if exist
        if(st.top()->second == 2) -->a) push into inorder
                                    b)increment state ie. st.top()+1;
                            c) go to right if exist                            
                                    
        if(st.top()->second == 3) -->a) push into postorder
                             b) pop from the stack 
        */
        
        vector<int>post;
        if(root==nullptr) return post;
        stack<pair<TreeNode* , int>>st;
        st.push({root,1});
        while(!st.empty()){
            int state  =  st.top().second;
            TreeNode* temp = st.top().first;
            if(state == 1){
                //preorder.push(temp->val);
                st.top().second = state+1;
                if(temp->left != NULL) st.push({temp->left , 1});
            }
            else if(state == 2){
                //inorder.push(temp->val);
                st.top().second = state+1;
                if(temp->right) st.push({temp->right , 1});
            }
            else{
                post.push_back(temp->val);
                st.pop();
            }

        }

        return post;
            
    }
