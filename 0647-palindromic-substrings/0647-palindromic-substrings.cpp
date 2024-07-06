class Solution {
public:
    int countSubstrings(string s) {
        int cnt = 0;
        int n = s.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, false));

        for (int l = 1; l <= n; l++) {
            for (int i = 0; i + l - 1 < n; i++) {
                int j = i + l - 1;
                if (i == j) {
                    dp[i][i] = true;
                } else if (i + 1 == j) {
                    dp[i][j] = (s[i] == s[j]);
                } else {
                    dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
                }
                if (dp[i][j] == true) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};