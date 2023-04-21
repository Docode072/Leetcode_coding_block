 vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        vector<int> ans;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>0)
            {
                st.push(a[i]);
            }
            else
            {
                if(st.empty())
                {
                    st.push(a[i]);
                        continue;
                }

                while(!st.empty() && st.top()>0 && st.top()<abs(a[i]))
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                        st.push(a[i]);
                        continue;
                }
                    
                if(st.top()<0)
                {
                   st.push(a[i]); 
                        continue;
                }
                if(st.top()+a[i]==0)
                {
                   st.pop();
                   continue;
                }
            }
        }
        while(st.size()!=0)
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
