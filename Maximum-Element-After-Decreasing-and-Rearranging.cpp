1class Solution {
2public:
3    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
4        int n = arr.size();
5        sort(arr.begin(), arr.end());
6        int diff = 1;
7        for (int i = 1; i < n; i++) {
8            if (arr[i] > diff) {
9                diff += 1;
10            }
11        }
12        return diff;
13    }
14};