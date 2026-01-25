1class Solution {
2public:
3    bool f(vector<int>& nums, int k, int mid) {
4        int split = 1;
5        int sum = 0;
6        for (auto it : nums) {
7            if (it + sum > mid) {
8                split++;
9                sum = it;
10            } else {
11                sum += it;
12            }
13        }
14        return split <= k;
15    }
16    int splitArray(vector<int>& nums, int k) {
17        int n = nums.size();
18        int low = 0;
19        int high = 0;
20        for (auto it : nums) {
21            low = max(it, low);
22            high += it;
23        }
24        int ans = high;
25        while (low <= high) {
26            int mid = low + (high - low) / 2;
27            if (f(nums, k, mid)) {
28                ans = mid;
29                high = mid - 1;
30            } else {
31                low = mid + 1;
32            }
33        }
34        return ans;
35    }
36};