1class NumMatrix {
2private:
3    int row, col;
4    vector<vector<int>> pref;
5
6public:
7    NumMatrix(vector<vector<int>>& matrix) {
8        row = matrix.size();
9        col = matrix[0].size();
10        pref = vector<vector<int>>(row + 1, vector<int>(col + 1, 0));
11        for (int i = 1; i <= row; i++) {
12            for (int j = 1; j <= col; j++) {
13                pref[i][j] = pref[i - 1][j] + pref[i][j - 1] -
14                             pref[i - 1][j - 1] + matrix[i - 1][j - 1];
15            }
16        }
17    }
18
19    int sumRegion(int row1, int col1, int row2, int col2) {
20        return pref[row2 + 1][col2 + 1] - pref[row2 + 1][col1] -
21               pref[row1][col2 + 1] + pref[row1][col1];
22    }
23};
24
25/**
26 * Your NumMatrix object will be instantiated and called as such:
27 * NumMatrix* obj = new NumMatrix(matrix);
28 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
29 */