// Last updated: 1/22/2026, 7:50:19 PM
class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) {
            return false;
        }
        int t = 10;
        int chance = 0;
        while (n >= t) {
            n = n - t;
            chance++;
            t--;
        }
        return chance % 2 ? true : false;
    }
};