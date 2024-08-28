class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(mid==0){
                return nums[0]>=nums[1] ? 0:1;
            }
            if(mid==n-1){
                return nums[n-1]>=nums[n-2] ? right-1:right-2;
            }
            if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]){
                 return mid;
            }
            if(nums[mid]<nums[mid-1]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
        
    }
};