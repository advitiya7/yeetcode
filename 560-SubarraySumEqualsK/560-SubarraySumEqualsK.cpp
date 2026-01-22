// Last updated: 1/22/2026, 7:55:41 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int sum=0;
        unordered_map<int,int>mp;
        mp.insert({0,1});  /// for -ve test cases when the sum of the whole array is 0
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;

        }
        return ans;
        
    }
};