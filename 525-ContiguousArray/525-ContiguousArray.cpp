// Last updated: 1/22/2026, 7:55:47 PM
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum=sum-1;
            }
            else{
                sum+=1;
            }
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }

        }
        return ans;
        
    }
};