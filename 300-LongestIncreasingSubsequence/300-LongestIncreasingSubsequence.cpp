// Last updated: 1/22/2026, 7:56:04 PM
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) { 
        int n = nums.size(); 
        vector<int>dp(n,1); //as the minimum length till that index will include the number at that particular index
        int ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                dp[i]=max(dp[i],1+dp[j]);
                ans=max(ans,dp[i]);
            }
            }
        }
        return ans;

        }
};