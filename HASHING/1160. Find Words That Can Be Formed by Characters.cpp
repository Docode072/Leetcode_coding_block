class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        unordered_map<char ,int>m;
        for(auto ch : chars){
            m[ch]++;
        }
        for(auto &str : words){
            bool flag = true;
            unordered_map<char ,int>m1;
            for(auto ch : str)
                if(m[ch] < ++m1[ch]){ flag = false ; break;}
                
            if(flag == true)
            ans += str.size();
        }
        return ans;
    }
};
