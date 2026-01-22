// Last updated: 1/22/2026, 7:52:53 PM
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));
        for (int i = 1; i < n + 1; i++) {
            dp[i][0] = max(dp[i - 1][1] - nums[i - 1],
                           dp[i - 1][0]); // 1based indexing
            dp[i][1] = max(dp[i - 1][0] + nums[i - 1], dp[i - 1][1]);
        }
        return max(dp[n][1], dp[n][0]);
    }
};