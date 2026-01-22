// Last updated: 1/22/2026, 7:50:27 PM
class Solution {
public:
    long long shiftDistance(string s, string t, vector<int>& nextCost, vector<int>& previousCost) {
        long long res = 0;
        for (int i = 0; i < s.length(); ++i) {
            int ss = s[i] - 'a';
            int tt = t[i] - 'a';
            if (ss == tt) continue;

            long long next = 0, pre = 0;

            for (int j = ss; j != tt; j = (j + 1) % 26) {
                next += nextCost[j];
            }
            for (int j = ss; j != tt; j = (j - 1 + 26) % 26) {
                pre += previousCost[j];
            }
            res += min(next, pre);
        }

        return res;
    }
};
