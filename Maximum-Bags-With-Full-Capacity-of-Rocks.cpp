1class Solution {
2public:
3    int maximumBags(vector<int>& capacity, vector<int>& rocks,
4                    int additionalRocks) {
5        int n = capacity.size();
6        vector<int> diff(n);
7        for (int i = 0; i < n; i++) {
8            diff[i] = abs(capacity[i] - rocks[i]);
9        }
10        sort(diff.begin(), diff.end());
11        int ans = 0;
12        for (int i = 0; i < n; i++) {
13            if (additionalRocks >= diff[i]) {
14                ans++;
15                additionalRocks -= diff[i];
16            } else {
17                break;
18            }
19        }
20        return ans;
21    }
22};