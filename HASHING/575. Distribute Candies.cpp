 int distributeCandies(vector<int>& ct) {
        unordered_map<int,int>mp;
        for(auto x : ct){
            mp[x]++;
        }
        int t = ct.size()/2;
        if(mp.size() < t)
           return mp.size();
        else{
            return t;
        }
    }
