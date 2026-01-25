1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int n = nums.size();
5        int i = 0;
6        int j = 0;
7        int cnt = 0;
8        int ans = 0;
9        while (j < n) {
10            if (nums[j] == 0) {
11                cnt++;
12            }
13            while (cnt > k) {
14                if (nums[i] == 0) {
15                    cnt--;
16                }
17                i++;
18            }
19            ans = max(ans, j - i + 1);
20            j++;
21        }
22        return ans;
23    }
24};