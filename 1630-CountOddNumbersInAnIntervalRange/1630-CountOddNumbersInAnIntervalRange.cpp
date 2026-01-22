// Last updated: 1/22/2026, 7:53:20 PM
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
            for (int i = low; i <= high; i++) {
                if (i % 2 != 0) {
                    ans++;
                }
            }
        return ans;
    }
};