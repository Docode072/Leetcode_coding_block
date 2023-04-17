vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        if(root == NULL){
            return ans;
        }
        st.push(root);
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            // first push right node because on pop first come left and then right node
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }
        
        return ans;
    }
