// Last updated: 1/22/2026, 7:52:50 PM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int l=0;
    int r=n-1;
    int sum=0;
    while(l<r){
        sum=max(sum,nums[l]+nums[r]);
        l++;
        r--;
    }
    return sum;
    }
};