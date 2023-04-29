class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(auto x :nums){
            m[x]++;
            if(m[x]>1){
             ans.push_back(x); 
            }
        }
       // sort(nums.begin() , nums.end());
       int n = nums.size();
        for(int i = 1 ;i <=n ;i++){
            if(m[i] == 0){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
