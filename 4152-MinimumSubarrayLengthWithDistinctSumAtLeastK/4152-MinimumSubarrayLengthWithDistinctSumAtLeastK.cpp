// Last updated: 1/22/2026, 7:50:01 PM
class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mp;
        int i = 0;
        int j = 0;
        int ans = INT_MAX;
        int sum = 0;
        while (j < n) {
            mp[nums[j]]++;
            if (mp[nums[j]] == 1) {
                sum += nums[j];
            }
            while (sum >= k) {
                mp[nums[i]]--;
                ans = min(ans, j - i + 1);
                if (mp[nums[i]] == 0) {
                    sum -= nums[i];
                }
                i++;
            }
            j++;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};