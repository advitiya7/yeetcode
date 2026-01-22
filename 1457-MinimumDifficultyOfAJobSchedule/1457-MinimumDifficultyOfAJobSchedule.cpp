// Last updated: 1/22/2026, 7:53:47 PM
class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if (n < d) {
            return -1;
        }
        // dp[i][j]-> minimum difficulty from i to n-1 in j days
        vector<vector<int>> dp(n + 1, vector<int>(d + 1, -1));
        for (int i = 0; i < n; i++) {
            dp[i][1] =
                *max_element(jobDifficulty.begin() + i, jobDifficulty.end());
        }
        for (int days = 2; days <= d; days++) {
            for (int i = 0; i <= n - days; i++) {
                int maxDiff = INT_MIN;
                int ans = INT_MAX;
                for (int j = i; j <= n - days; j++) {
                    maxDiff = max(maxDiff, jobDifficulty[j]);
                    ans = min(ans, maxDiff + dp[j + 1][days - 1]);
                }
                dp[i][days] = ans;
            }
        }

        return dp[0][d];
    }
};