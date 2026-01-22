// Last updated: 1/22/2026, 7:56:27 PM
class Solution {
public:
int f(int i,vector<int>&nums,vector<int>&dp){
    if(i==0){
        return nums[0];
    }
    if(i<=0){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int notake=0+f(i-1,nums,dp);
    
    int take=nums[i]+f(i-2,nums,dp);
    
    return dp[i]=max(notake,take);
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return f(nums.size()-1,nums,dp);
    }
};