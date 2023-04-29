class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int>m; int ans = 0;
        for(auto v : nums){
            m[v]++;
        }
        if(m.size()==0) return 0;
        for(int i =0 ;i< nums.size(); i++){
            if(m[nums[i]+1]){
                int temp = 0;
                temp = m[nums[i]]+m[nums[i]+1];
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};
