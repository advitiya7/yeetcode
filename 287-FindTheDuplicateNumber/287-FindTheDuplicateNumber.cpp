// Last updated: 1/22/2026, 7:56:08 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            int idx=num-1;
            if(nums[idx]<0){
                ans=num;
            }
            else{
                nums[idx]*=-1;
            }

        }
        return ans;
        
    }
};