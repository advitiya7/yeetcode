1class Solution {
2public:
3    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
4        int n = s.size();
5        vector<int> v;
6        vector<int> ans;
7        for (int i = 0; i < n; i++) {
8            if (s[i] == '|') {
9                v.push_back(i);
10            }
11        }
12        // now we have positions of all the candles in a sorted list
13        for (auto it : queries) {
14            int left = it[0];
15            int right = it[1];
16            int left_idx = lower_bound(v.begin(), v.end(), left) -
17                           v.begin(); // this gives the first index of the
18                                      // candle in our query range
19            int right_idx = upper_bound(v.begin(), v.end(), right) - v.begin() -
20                            1; // this gives the last index of the candle in our
21                               // query range the -1 is to ensure we dont go
22                               // outside the rightmost candle index
23            if (left_idx < right_idx) {
24                ans.push_back((v[right_idx] - v[left_idx]) -
25                              (right_idx - left_idx));
26            } else {
27                ans.push_back(0);
28            }
29        }
30        return ans;
31    }
32};