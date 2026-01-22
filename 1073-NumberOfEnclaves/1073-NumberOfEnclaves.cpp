// Last updated: 1/22/2026, 7:54:36 PM
class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col,
             vector<vector<int>>& vis) {
        vis[row][col] = 1;
        int m = grid.size();
        int n = grid[0].size();
        int subRow[] = {-1, 0, 1, 0};
        int subCol[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int nrow = subRow[i] + row;
            int ncol = subCol[i] + col;
            if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                !vis[nrow][ncol] && grid[nrow][ncol] == 1) {
                dfs(grid, nrow, ncol, vis);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0 || i == m - 1 || j == n - 1) {
                    if (grid[i][j] == 1 && !vis[i][j]) {
                        dfs(grid, i, j, vis);
                    }
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && grid[i][j] == 1) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};