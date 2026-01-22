1class Solution {
2public:
3    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
4        int n = s.size();
5        vector<vector<int>> pref(
6            n + 1, vector<int>(26, 0)); // prefix array with stores the count of
7                                        // alphbets in subarray
8        // pref[i+1][c]=> will tell count of occurence of all the alphabets in
9        // the substring till index i in s[0...i]
10        for (int i = 0; i < n; i++) {
11            pref[i + 1] = pref[i];
12            pref[i + 1][s[i] - 'a']++;
13        }
14        vector<bool> ans;
15        for (auto it : queries) {
16            int l = it[0];
17            int r = it[1];
18            int k = it[2];
19            int odd = 0;
20            for (int i = 0; i < 26; i++) {
21                int freq = pref[r + 1][i] - pref[l][i];
22                if (freq % 2 != 0) {
23                    odd++;
24                }
25            }
26            ans.push_back(odd / 2 <= k);
27        }
28        return ans;
29    }
30};