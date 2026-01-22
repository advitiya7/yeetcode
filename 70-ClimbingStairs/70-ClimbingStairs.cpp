// Last updated: 1/22/2026, 7:56:55 PM
class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};