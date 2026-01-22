// Last updated: 1/22/2026, 7:50:41 PM
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>v(nums.size());
        for(auto it:mp){
            if(it.second==2){
                ans=ans^it.first;
            
            }
        }
        return ans;
    }
};