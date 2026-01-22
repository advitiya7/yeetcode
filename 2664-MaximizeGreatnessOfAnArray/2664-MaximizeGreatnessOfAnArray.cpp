// Last updated: 1/22/2026, 7:52:00 PM
class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
        int n=nums.size();
        int ans=0;
        while(j<n){
            if(nums[i]<nums[j]){
                i++;
                j++;
                ans++;
            }
            else{
                j++;
            }
        }
        return ans;
        
    }
};