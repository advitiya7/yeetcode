// Last updated: 1/22/2026, 7:53:16 PM
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        sort(nums.begin(),nums.end(),[&](int n,int m){
            if(mp[n]!=mp[m]){
                return mp[n]<mp[m];
            }
            else{
                return n>m;
            }
        });
        return nums;
    }
};