1class Solution {
2public:
3    int dominantIndices(vector<int>& nums) {
4        int n = nums.size();
5        long long totalSum = 0;
6        
7        for (int x : nums) {
8            totalSum += x;
9        }
10
11        int cnt = 0;
12        long long prefixSum = 0;
13
14        for (int i = 0; i < n - 1; i++) {
15            prefixSum += nums[i];
16            long long suffixSum = totalSum - prefixSum;
17
18            int remaining = n - i - 1;
19
20            if (nums[i] * remaining > suffixSum) {
21                cnt++;
22            }
23        }
24
25        return cnt;
26    }
27};
28