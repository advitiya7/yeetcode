// Last updated: 1/22/2026, 7:51:21 PM
class Solution {
public:
int f(int i,int target,vector<int>&nums,vector<vector<int>>&dp){
    if(target==0) return 1;
    if(i<0) return -1e9;
    if(dp[i][target]!=-1){
        return dp[i][target];
    }
    int nopick=f(i-1,target,nums,dp);
    int pick= -1e9;
    if(nums[i]<=target){
        pick=1+f(i-1,target-nums[i],nums,dp);
    }
   return dp[i][target]=max(pick,nopick);

}
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        int ans=f(n-1,target,nums,dp)-1;
        if(ans<=0){
            return -1;
        }
        return ans;
        
    }
};