// Last updated: 1/22/2026, 7:54:55 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }
        for (int i = 0; i < even.size(); i++) {
            ans[i]=even[i];
        }
        for (int i = 0; i < odd.size(); i++) {
            ans[i + even.size()] = odd[i];
        }
        return ans;
    }
};