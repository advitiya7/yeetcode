// Last updated: 1/22/2026, 7:51:27 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(nums[i]+nums[j]<target){
                   ans+=1;
               }


           }
       }
       return ans;
    }
};