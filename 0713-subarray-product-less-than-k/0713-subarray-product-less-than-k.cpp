class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k == 0) {
            return 0;
        }
        int n = nums.size();
        int i = 0;
        int j = 0;
        int prod = 1;
        int ans = 0;
        while (j < n) {
            prod *= nums[j];
            while (prod >= k && i<=j) {
                prod /= nums[i];
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;
    }
};