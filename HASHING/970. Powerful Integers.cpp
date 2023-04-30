class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int> ans;
        for (int xi = 1; xi < bound; xi *= x) {
            for (int yj = 1; xi + yj <= bound; yj *= y) {
                ans.insert(xi + yj);
                if (y == 1) break;
            }
            if (x == 1) break;
        }
        return vector<int>(ans.begin(), ans.end());

    }
};
