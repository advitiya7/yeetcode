// Last updated: 1/22/2026, 7:51:55 PM
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n);
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto it:mp){
            int num=it.first;
            vector<int>&indexes=it.second;
            long long tot_sum=0;
            for(auto it:indexes){
                tot_sum+=(long long)it;
            }
            long long presum=0;
            for(int i=0;i<indexes.size();i++){
                int index=indexes[i];
                long long postsum=tot_sum-presum-index;
                ans[index]+=(index*(long long)i);
                ans[index]-=(presum);
                ans[index]-=(index*(long long)(indexes.size()-i-1));
                ans[index]+=(postsum);
                presum+=index;
            }
        }
        return ans;
    }
};