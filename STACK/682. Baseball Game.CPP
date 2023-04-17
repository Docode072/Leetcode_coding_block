string removeOuterParentheses(string s) {
        stack<char>st;
        string str="";
        for(auto ch : s){
            if(ch == '('){
                if(st.size() > 0) str += ch;
                st.push(ch);
            }
            else if(ch == ')'){
                st.pop();
                if(st.size() > 0){
                    str += ch;
                }
            }
        }
        return str;
    }
