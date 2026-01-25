1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int n = nums.size();
5        int sum = 0;
6        int ans = 0;
7        map<int, int> mp;  // sum, occurence
8        mp.insert({0, 1}); // for negative elements when the sum of the whole
9                           // sub-array is 0 and k is 0
10        for (int i = 0; i < n; i++) {
11            sum += nums[i];
12            if (mp.find(sum - k) != mp.end()) {
13                ans += mp[sum - k];
14            }
15            mp[sum]++;
16        }
17        return ans;
18    }
19};