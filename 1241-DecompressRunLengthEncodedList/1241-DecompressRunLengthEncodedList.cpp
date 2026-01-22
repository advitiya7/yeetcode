// Last updated: 1/22/2026, 7:54:19 PM
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i += 2) {
            ans.insert(ans.end(), nums[i], nums[i + 1]);
        }
        return ans;
    }
};