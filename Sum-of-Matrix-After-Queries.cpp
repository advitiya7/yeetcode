1class Solution {
2public:
3    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
4        vector<int> rows(n), cols(n);
5        int row = n;
6        int col = n;
7        long long sum = 0;
8        reverse(queries.begin(), queries.end());
9        for (int i = 0; i < queries.size(); i++) {
10            int type = queries[i][0];
11            int dim = queries[i][1];
12            if (type == 0 && rows[dim] == 0) {
13                int val = queries[i][2];
14                sum += row * val;
15                rows[dim] = 1;
16                col--;
17            } else if (type == 1 && cols[dim] == 0) {
18                int val = queries[i][2];
19                sum += val * col;
20                cols[dim] = 1;
21                row--;
22            }
23        }
24        return sum;
25    }
26};