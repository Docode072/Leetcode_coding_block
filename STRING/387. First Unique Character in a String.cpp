// apprach -->1
class Solution {
public:
    int firstUniqChar(string s) {
       vector<int>m(26, 0);
       for(auto c : s) m[c-'a']++;
       for(int i = 0; i< s.size(); i++){
            if(m[s[i] - 'a'] == 1)
                return i;
       }
       return -1;
    }
};

// approach->>2
// using map
int firstUniqChar(string s) {
       unordered_map<char , int>m;
       for(auto c : s) m[c]++;
       for(int i = 0; i< s.size() ; i++){
           if(m[s[i]] == 1)
             return i;
       }
       return -1;
    }
