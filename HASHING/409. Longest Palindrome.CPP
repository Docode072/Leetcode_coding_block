class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char ,int>mp; int ans=0;
        for(auto x : s){
            mp[x]++;
        }
        if(mp.size() == 1){
            for(auto x :mp)
                return x.second;
        }
           
        for(auto x : mp){
            if((x.second)%2 == 0){
                ans += x.second;
            }
            else{
              x.second>1 ? ans += x.second -1 : ans += 0 ;
            }
        }
        if(ans < s.size())
          ans++;
        
        return ans;
    }
};
