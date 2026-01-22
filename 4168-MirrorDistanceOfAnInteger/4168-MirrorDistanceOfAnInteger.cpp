// Last updated: 1/22/2026, 7:50:05 PM
class Solution {
public:
    int mirrorDistance(int n) {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        int rev;
        rev = stoi(s);
        return abs(n - rev);
    }
};