// Last updated: 1/22/2026, 7:51:08 PM
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>right(n,INT_MIN);
        vector<int>left(n,INT_MAX);
        left[0]=nums[0];
        right[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            left[i]=min(left[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=min(right[i+1],nums[i]);
        }
        int ans=INT_MAX;
        for(int i=1;i<n-1;i++){
            if(left[i-1]<nums[i] && right[i+1]<nums[i]){
                ans=min(ans,left[i-1]+right[i+1]+nums[i]);
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};