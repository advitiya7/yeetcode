// Last updated: 1/22/2026, 7:50:15 PM
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                int steps=(nums[i])%n;
                res[i]=nums[(i+steps)%n];
            }
            else if(nums[i]<0){
                int steps=abs(nums[i])%n;
                res[i]=nums[(i-steps+n)%n];
            }
        }
        return res;
              
    }
};