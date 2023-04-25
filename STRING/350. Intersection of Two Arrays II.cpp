class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int , int> m1;

        for(auto x : nums1) m1[x]++;
        for(int i = 0 ; i< nums2.size(); i++){
            if(m1[nums2[i]]){
                ans.push_back(nums2[i]);
                m1[nums2[i]]--;
            }
        }
        return ans;
    }
};
