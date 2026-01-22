// Last updated: 1/22/2026, 7:50:13 PM
class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        priority_queue<int> pq;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            sort(grid[i].begin(), grid[i].end(), greater<int>());
            for (int j = 0; j < min(m, limits[i]); j++) {
                pq.push(grid[i][j]);
            }
        }
        long long sum = 0;
        while (k-- && !pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};