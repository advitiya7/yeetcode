// Last updated: 1/22/2026, 7:53:53 PM
class Solution {
public:
bool condition(vector<int>& nums, int threshold,int mid){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=(nums[i]-1)/mid+1;
    }
    return sum<=threshold;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(condition(nums,threshold,mid)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;

        
    }
};