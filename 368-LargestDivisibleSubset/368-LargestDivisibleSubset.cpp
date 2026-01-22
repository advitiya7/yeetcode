// Last updated: 1/22/2026, 7:55:59 PM
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>dp(n,1); //dp[i]-> length of largest divisible subset till index i
        vector<int>prev(n,-1); // for storing the prev index;
        int prev_idx=0;
        int maxi=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        prev[i]=j;
                    }
                    if(dp[i]>maxi){
                        maxi=dp[i];
                        prev_idx=i; //index of the subsequence having the largest length
                    }
                }
            }
        }
        vector<int>ans;
        while(prev_idx>=0){
            ans.push_back(nums[prev_idx]);
            prev_idx=prev[prev_idx];
        }
        return ans;
    }
};