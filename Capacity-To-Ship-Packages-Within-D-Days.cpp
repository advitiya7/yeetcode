1class Solution {
2public:
3    bool check(vector<int>& weights, int days, int mid) {
4        int w=0;
5        int cnt = 1;
6        for (int i = 0; i < weights.size(); i++) {
7            if (w + weights[i] > mid) {
8                cnt++;
9                w = weights[i];
10            } else {
11                w += weights[i];
12            }
13        }
14        return cnt <= days;
15    }
16    int shipWithinDays(vector<int>& weights, int days) {
17        int n = weights.size();
18        int low=0;
19        int high=0;
20        for (auto it : weights) {
21            low = max(it, low);
22            high += it;
23        }
24        int ans = high;
25        while (high >= low) {
26            int mid = low + (high - low) / 2;
27            if (check(weights,days,mid)) {
28                ans = mid;
29                high = mid - 1;
30            } else {
31                low = mid + 1;
32            }
33        }
34        return ans;
35    }
36};