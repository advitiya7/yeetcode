// Last updated: 1/22/2026, 7:50:46 PM
class Solution {
public:
    int dp[1001];
    int f(int i, int n, string &s) {
        if (i >= n) {
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        int mini = INT_MAX;
        map<char, int> mp;
        for (int j = i; j < n; j++) {
            mp[s[j]]++;
            int prev = -1;
            int flag = 0;
            for (auto [x, y] : mp) {
                if (prev == -1) {
                    prev = y;
                } else {
                    if (prev !=y) {
                        flag = 1;
                        break;
                    }
                }
            }
            if (!flag) {
                mini = min(mini, 1 + f(j + 1, n, s));
            }
        }
        return dp[i] = mini;
    }
    int minimumSubstringsInPartition(string s) {
        int n = s.size();
        memset(dp, -1, sizeof(dp));
        return f(0, n, s);
    }
};