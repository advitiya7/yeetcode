// Last updated: 1/22/2026, 7:51:42 PM
#define ll long long
class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n=nums.size();
        ll ans=0;
        map<ll,ll>mp;
        int i=0;
        int j=0;
        while(j<n){
            mp[nums[j]]++;
            while(mp.size()>0 && mp.rbegin()->first-mp.begin()->first>2){
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            ans+=j-i+1;
            j++;

        }
        return ans;
        
    }
};