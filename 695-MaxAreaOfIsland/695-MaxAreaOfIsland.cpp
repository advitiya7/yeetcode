// Last updated: 1/22/2026, 7:55:20 PM
int delRow[] = {1, -1, 0, 0};
int delCol[] = {0, 0, -1, 1};
class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& grid,
             vector<vector<int>>& vis, int& cnt) {
        int n = grid.size();
        int m = grid[0].size();
        cnt++;
        vis[row][col] = 1;
        for (int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 & ncol < m &&
                vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                dfs(nrow, ncol, grid, vis, cnt);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == 1) {
                    int cnt = 0;
                    dfs(i, j, grid, vis, cnt);
                    ans = max(ans, cnt);
                }
            }
        }
        return ans;
    }
};