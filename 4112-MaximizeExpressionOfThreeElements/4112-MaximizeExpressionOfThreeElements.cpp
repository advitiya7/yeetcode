// Last updated: 1/22/2026, 7:50:07 PM
class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        sum=nums[n-2]+nums[n-1]-nums[0];
        return sum;
        
    }
};