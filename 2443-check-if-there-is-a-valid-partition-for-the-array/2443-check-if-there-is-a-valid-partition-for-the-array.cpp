class Solution {
public:
int dp[100001];
bool f(int i,vector<int>&nums,int n){
    if(i>=nums.size()){
        return true;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    if(i+1<n &&nums[i]==nums[i+1] && f(i+2,nums,n)){
        return dp[i]=true;
    }
    if(i+2<n &&nums[i]==nums[i+1] && nums[i]==nums[i+2] && f(i+3,nums,n)){
        return dp[i]=true;
    }
    if(i+2<n && nums[i]==nums[i+1]-1 && nums[i]==nums[i+2]-2 && f(i+3,nums,n)){
        return dp[i]=true;
    }
    return dp[i]=false;
}
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return f(0,nums,n);
        
    }
};