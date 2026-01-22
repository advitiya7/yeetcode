1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n = nums.size();
5        int i = 0;
6        int j = 0;
7        int ans = INT_MAX;
8        int sum = 0;
9        while (j < n) {
10            sum += nums[j];
11
12            while (sum >= target) {
13                ans = min(ans, j - i + 1);
14                sum -= nums[i];
15                i++;
16            }
17            j++;
18        }
19        return ans == INT_MAX ? 0 : ans;
20    }
21};