// Last updated: 1/22/2026, 7:51:16 PM
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>mp;
            int cnt=0;
            for(int j=i;j<n;j++){
                mp[nums[j]]++;
                if(mp[nums[j]]==1){
                    cnt++;
                }
                res+=cnt*cnt;
            }
        }
        return res;
    }
};