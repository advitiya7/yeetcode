// Last updated: 1/22/2026, 7:55:14 PM
int delRow[] = {-1, 1, 0, 0};
int delCol[] = {0, 0, -1, 1};
class Solution {
public:
    void dfs(vector<vector<int>>& image, int color, int sr, int sc, int prev) {
        image[sr][sc] = color;
        int m = image.size();
        int n = image[0].size();
        for (int i = 0; i < 4; i++) {
            int nrow = sr + delRow[i];
            int ncol = sc + delCol[i];
            if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                image[nrow][ncol] == prev && image[nrow][ncol] != color) {
                dfs(image, color, nrow, ncol, prev);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int prev = image[sr][sc];
        dfs(image, color, sr, sc, prev);
        return image;
    }
};