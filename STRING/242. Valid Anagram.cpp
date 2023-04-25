// Approach --> 1 // 60% beat
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int>m1;
        for(auto x : s) m1[x]++;

        for(auto ch : t){
            if(m1[ch]) m1[ch]--;
            else
              return false;
        }
        for(auto x : m1){
            if(x.second != 0)
             return false;
        }
        return true;
    }
};



// apprach ->2   // 90%+ beat
class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>ts(26 , 0);
       vector<int>sa(26,0);

       for(auto x : s)   sa[x-'a']++;
       for(auto y : t)   ts[y-'a']++;

       if(sa == ts) return true;
       return false;
    
    }
};
