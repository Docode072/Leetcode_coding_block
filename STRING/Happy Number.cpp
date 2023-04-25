class Solution {
public:
    bool isHappy(int n) {
        
        unordered_map<int , int>mp;
        int sum = 0 , num;

        while(1){
            sum = 0;
            while(n){
                sum += pow(n%10 , 2);
                n = n/10; 
            }

            if(sum == 1) return true;
            else if(mp[sum]) return false;

            mp[sum]++;
            n = sum;
        }
        return false;
    }
};
