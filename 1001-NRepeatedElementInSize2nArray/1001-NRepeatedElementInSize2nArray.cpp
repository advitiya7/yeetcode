// Last updated: 1/22/2026, 7:54:46 PM
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ans;
        for (auto it : mp) {
            if (it.second == nums.size() / 2) {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};