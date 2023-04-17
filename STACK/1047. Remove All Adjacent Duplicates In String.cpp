string removeDuplicates(string s) {
        string ans ="";
        for(auto ch : s){
            if(ans.back() == ch){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
