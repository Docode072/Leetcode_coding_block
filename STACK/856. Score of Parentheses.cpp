class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;

        for(auto it : s)    {
            if(it == '(')   st.push(-1);
            else if(st.top()==-1)    {
                st.pop();
                st.push(1);
            }
            else    {
                int x = 0;
                while(st.top() != -1)   {
                    x += st.top();
                    st.pop();
                }
                st.pop();
                st.push(2*x);
            }
        }
        int ans = 0;
        while(!st.empty())  {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
    
};
