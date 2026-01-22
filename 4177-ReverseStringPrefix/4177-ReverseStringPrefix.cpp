// Last updated: 1/22/2026, 7:49:57 PM
class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        if (n == k) {
            reverse(s.begin(), s.end());
            return s;
        }
        reverse(s.begin(), s.begin() + k);
        return s;
    }
};