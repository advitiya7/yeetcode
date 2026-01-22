// Last updated: 1/22/2026, 7:52:42 PM
class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int i = 0;
        int j = n - 1;
        int cnt = 0;
        int ca = capacityA;
        int cb = capacityB;
        while (i < j) {
            if (ca >= plants[i]) {
                ca -= plants[i];
                i++;
            } else {
                ca = capacityA-plants[i];
                cnt++;
                i++;
            }
            if (cb >= plants[j]) {
                cb -= plants[j];
                j--;
            } else {
                cb = capacityB-plants[j];
                cnt++;
                j--;
            }
            if (i == j && plants[i] > ca && plants[j] > cb) {
                cnt++;
            }
        }
        return cnt;
    }
};