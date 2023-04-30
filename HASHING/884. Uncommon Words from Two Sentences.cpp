class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        unordered_map<string,int>m;
        stringstream ss(s1+" "+s2); string word;
        while(ss >> word) m[word]++;
        for(auto x : m){
            if(x.second ==1)
             ans.push_back(x.first);
        }

        return ans;
    }
};
