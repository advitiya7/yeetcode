// Last updated: 1/22/2026, 7:51:45 PM
class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        //Tabulation
        for(int i=0; i<n; i++){
            if(abs(nums[0] - nums[i])<=target) dp[0][i] = 1;
            else dp[0][i] = -1e8;
        }

        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){        
                int notTake = dp[i-1][j];
                int take = -1e8;
                if(abs(nums[i] - nums[j])<=target) take = 1 + dp[i-1][i];
                dp[i][j] = max(take, notTake);
            }
        }
        int ans = dp[n-2][n-1]; 
        if(ans > 0) return ans;
        return -1;
    }
};