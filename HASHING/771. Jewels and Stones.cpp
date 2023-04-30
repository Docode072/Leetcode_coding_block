class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int ans= 0;
        unordered_map<char,int>m;
        for(auto ch : j) m[ch]++;
        for(auto c : s){
            if(m[c]){
                ans++;
            }
        }
        return ans;
    }
};
