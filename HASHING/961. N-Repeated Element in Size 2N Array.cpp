class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = nums.size()/2;
        unordered_map<int , int>m;
        for(auto v : nums){
            m[v]++;
            if(m[v] == n)
             return v;
        }
        return -1;
    }
};
