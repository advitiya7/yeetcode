// Last updated: 1/22/2026, 7:53:46 PM
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && arr[i] == 2 * arr[j]) {
                    return true;
                }
            }
        }
        return false;
    }

};