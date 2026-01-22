// Last updated: 1/22/2026, 7:56:31 PM
class Solution {
public:
bool check(int mid,vector<int>&nums){
    if(mid==nums.size()-1){
        return true;
    }
    return nums[mid]>nums[mid+1];
}
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(check(mid,nums)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};