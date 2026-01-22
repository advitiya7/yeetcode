// Last updated: 1/22/2026, 7:51:05 PM
class Solution {
public:
    bool check(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int beautifulSubstrings(string s, int k) {
        int n = s.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int v = 0;
            int c = 0;
            for (int j = i; j < n; j++) {
                if (check(s[j])) {
                    v++;
                } else {
                    c++;
                }
                if (v == c && (v * c) % k == 0) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};