1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int n = cardPoints.size();
5        int i = 0;
6        int j = 0;
7        int ans = INT_MAX;
8        int sum = 0;
9        int total_sum = accumulate(cardPoints.begin(), cardPoints.end(), 0);
10        int winsize = n - k;
11        if (winsize == 0)
12            return total_sum;
13        while (j < n) {
14            sum += cardPoints[j];
15            if (j - i + 1 == winsize) {
16                ans = min(ans, sum);
17                sum -= cardPoints[i];
18                i++;
19            }
20            j++;
21        }
22        return total_sum-ans;
23    }
24};