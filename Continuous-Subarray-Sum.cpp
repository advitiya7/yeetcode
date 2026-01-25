1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        int sum=0;
5        unordered_map<int,int>mp;
6        mp[0]=-1;
7        for(int i=0;i<nums.size();i++){
8            sum+=nums[i];
9            if(mp.find(sum%k)!=mp.end()){
10                if(i-mp[sum%k]>=2){
11                    return true;
12                }
13            }
14            else{
15                mp[sum%k]=i;
16            }
17        }
18        return false;
19        
20    }
21};