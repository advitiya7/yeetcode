1class Solution {
2public:
3    long long countSubarrays(vector<int>& nums, long long k) {
4        long long n = nums.size();
5        long long ans = 0;
6        long long sum = 0;
7        long long i = 0;
8        long long j = 0;
9        while (j < n) {
10            sum += nums[j];
11            while (sum * (j - i + 1) >= k) {
12                sum -= nums[i];
13                i++;
14            }
15            ans += j - i + 1;
16            j++;
17        }
18        return ans;
19    }
20};