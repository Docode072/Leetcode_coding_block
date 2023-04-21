bool find132pattern(vector<int>& nums) {
        stack<int>st;
        int s3 = INT_MIN;
        int n = nums.size();
        st.push(nums[n-1]);
        for(int i = n-1 ; i >= 0 ;i--){
            if(nums[i] < s3) return true;
            
            while(!st.empty() and st.top() < nums[i]){
                s3 = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
