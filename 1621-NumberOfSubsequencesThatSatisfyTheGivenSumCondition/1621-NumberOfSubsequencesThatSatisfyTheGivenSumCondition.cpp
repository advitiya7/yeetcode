// Last updated: 1/22/2026, 7:53:23 PM
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int MOD=1e9+7;
        int l=0;
        int r=nums.size()-1;
        int cnt=0;
        vector<int>ans(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            ans[i]=(ans[i-1]*2)%MOD;
        }
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                cnt=(cnt+(ans[r-l]))%MOD;
                l++;
            }
            else{
            r--;
            }
        }
        return cnt;
        
    }
};