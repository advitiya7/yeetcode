1class Solution {
2public:
3    int percentageLetter(string s, char letter) {
4        int n = s.size();
5        int cnt = 0;
6        for (int i = 0; i < n; i++) {
7            if (s[i] == letter) {
8                cnt++;
9            }
10        }
11        return (cnt * 100) / n;
12    }
13};