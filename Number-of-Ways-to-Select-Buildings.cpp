1#define ll long long
2class Solution {
3public:
4    long long numberOfWays(string s) {
5        int n = s.size();
6        ll total_zeros = 0;
7        ll total_ones = 0;
8        for (auto it : s) {
9            if (it == '0') {
10                total_zeros++;
11            } else {
12                total_ones++;
13            }
14        }
15        ll ans = 0;
16        ll left_zeros = 0;
17        ll left_ones = 0;
18        for (auto it : s) {
19            if (it == '0') {
20                ll right_ones = total_ones - (left_ones);
21                ans += (right_ones) * (left_ones);
22                left_zeros++;
23            } else {
24                ll right_zeros = total_zeros - (left_zeros);
25                ans += (right_zeros)*left_zeros;
26                left_ones++;
27            }
28        }
29        return ans;
30    }
31};