// Last updated: 1/22/2026, 7:57:08 PM
class Solution {
public:
bool condition(int mid,vector<int>& nums, int target){
    int thres=0;
    if(target<nums[0] && nums[mid]<nums[0]){   // same segment check
        thres=nums[mid]; 
    }
    else if(target>=nums[0] && nums[mid]>=nums[0]){
        thres=nums[mid];
    }
    else if(target<nums[0]){
        thres=INT_MIN;
    }
    else{
        thres=INT_MAX;
    }
    return thres>=target;
      
}
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(condition(mid,nums,target)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        if(nums[left]==target){
            return left;
        }
        return -1;
    }
};