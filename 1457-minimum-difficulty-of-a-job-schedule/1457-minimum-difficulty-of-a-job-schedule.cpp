class Solution {
public:
int dp[301][11];
    int solve(int i, int n, vector<int>& jobDifficulty, int d) {
        if (d == 1) {
            return *max_element(jobDifficulty.begin() + i, jobDifficulty.end());
        }
        int maxdiff = INT_MIN;
        int ans = INT_MAX;
        if(dp[i][d]!=-1){
            return dp[i][d];
        }
        for (int j = i; j <= n - d; j++) {
            maxdiff = max(maxdiff, jobDifficulty[j]);
            ans = min(ans, maxdiff + solve(j + 1, n, jobDifficulty, d - 1));
        }
        return dp[i][d]=ans;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if (n < d) {
            return -1;
        }
        memset(dp,-1,sizeof(dp));
        return solve(0, n, jobDifficulty, d);
    }
};