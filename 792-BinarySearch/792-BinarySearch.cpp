// Last updated: 1/22/2026, 7:55:11 PM
class Solution {
public:
bool condition(int mid,vector<int>& nums, int target){
    return nums[mid]>=target;
}
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(right>left){
            int mid=left+(right-left)/2;
            if(condition(mid,nums,target)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return nums[left]==target?left:-1;
    }
};