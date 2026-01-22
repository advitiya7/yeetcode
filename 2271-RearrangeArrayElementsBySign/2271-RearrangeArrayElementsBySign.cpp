// Last updated: 1/22/2026, 7:52:39 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> mp1;
        map<int, int> mp2;
        vector<int> ans(nums.size());
        int j = 0;
        int k = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans[j] = nums[i];
                j += 2;
            } else {
                ans[k] = nums[i];
                k += 2;
            }
        }
        return ans;
    }
};