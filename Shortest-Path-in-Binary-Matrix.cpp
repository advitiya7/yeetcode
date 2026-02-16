1class Solution {
2public:
3    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
4        int n = grid.size();
5        int m = grid[0].size();
6        if (n == 0 || m == 0 || grid[0][0] == 1 || grid[n - 1][m - 1] == 1)
7            return -1;
8        queue<pair<int, int>> q;
9        q.push({0, 0});
10        grid[0][0] = 1;
11        int cnt = 0;
12        int delrow[] = {-1, 1, 0, 0, -1, -1, 1, 1};
13        int delcol[] = {0, 0, 1, -1, 1, -1, -1, 1};
14        while (!q.empty()) {
15            int N = q.size();
16            while (N--) {
17                auto [x, y] = q.front();
18                q.pop();
19                if (x == n - 1 && y == m - 1) {
20                    return cnt + 1;
21                }
22                for (int i = 0; i < 8; i++) {
23                    int nrow = x + delrow[i];
24                    int ncol = y + delcol[i];
25                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
26                        grid[nrow][ncol] == 0) {
27                        grid[nrow][ncol] = 1;
28                        q.push({nrow, ncol});
29                    }
30                }
31            }
32            cnt++;
33        }
34        return -1;
35    }
36};