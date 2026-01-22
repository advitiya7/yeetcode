// Last updated: 1/22/2026, 7:51:35 PM
class Solution {
public:
    long long maxScore(vector<int>& nums, int x) {
        int n=nums.size();
        vector<vector<long long>>dp(n+1,vector<long long>(2,0));
        long long sum=INT_MIN;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<2;j++){
                if(nums[i]%2==j){
                    sum=max(nums[i]+dp[i+1][j],dp[i+1][j]);
                }
                else{
                    sum=max(nums[i]-x+dp[i+1][nums[i]%2],dp[i+1][j]);
                }
                dp[i][j]=sum;
            }
        }
        return dp[0][nums[0]%2];

        
    }
};