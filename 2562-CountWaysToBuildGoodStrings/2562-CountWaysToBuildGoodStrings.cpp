// Last updated: 1/22/2026, 7:52:12 PM
class Solution {
public:
    int dp[1000001];
    int mod = 1e9 + 7;
    int f(int i, int zero, int one) {
        if (i == 0) {
            return 1;
        }
        if (i < 0) {
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        int o = f(i - one, zero, one);
        int zo = f(i - zero, zero, one);
        return dp[i] = (o + zo) % mod;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        memset(dp, -1, sizeof(dp));
        int ans = 0;
        for (int i = low; i <= high; i++) {
            ans = ((ans % mod) + f(i, one, zero) % mod) % mod;
        }
        return ans;
    }
};