// Last updated: 1/22/2026, 7:50:26 PM
class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int ans = INT_MIN, sum = 0;
        unordered_map<int, int>map;
        for (auto n : nums) {
            sum += n;
            map[n * 2]++;
        }
        for (auto n : nums) {
            int t = sum - n;
            if (t == n * 2) {
                if (map[t] >= 2)
                    ans = max(ans, n);
            }
             else if (map[t] >= 1)
                ans = max(ans, n);
        }
        return ans;
    }
};