class Solution {
public:
    int dp[100001][2];
    int MOD = 1e9 + 7;
    long long getAns(vector<int>& nums, int i, int k) {
        if (i >= nums.size()) {
            return k == 1; // if one 1 is there
        }

        if (dp[i][k] != -1)
            return dp[i][k];

        if (k == 1) {
            if (nums[i] ==
                0) { // then i have two choice eithe break it here or  not

                return dp[i][k] = (getAns(nums, i + 1, 0) % MOD +
                                   getAns(nums, i + 1, k) % MOD) %
                                  MOD;
            } else { // now i have to break it because one 1's in subarray is
                     // already present

                return dp[i][k] = getAns(nums, i + 1, 1) % MOD;
            }
        } else {

            return dp[i][k] = getAns(nums, i + 1, k + nums[i]) % MOD;
        }
    }
    int numberOfGoodSubarraySplits(vector<int>& nums) {

        memset(dp, -1, sizeof(dp));
        return getAns(nums, 0, 0);
    }
};