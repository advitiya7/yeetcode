// Last updated: 1/22/2026, 7:56:18 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            if (mp.find(nums[i]) != mp.end() && abs(mp[nums[i]] - i) <= k)
                return true;
            else
                mp[nums[i]] = i;
        }

        return false;
    }
};