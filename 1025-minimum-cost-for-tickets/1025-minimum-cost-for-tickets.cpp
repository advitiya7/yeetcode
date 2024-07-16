class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        // dp[i]-> minimum cost of tickets till index i
        // dp[0]->0
        set<int> st(days.begin(), days.end());
        int n = days.size();
        int size = days[n - 1];
        vector<int> dp(size + 1, 0);
        dp[0] = 0;
        for (int i = 1; i <= size; i++) {
            if (st.find(i) == st.end()) {
                dp[i] = dp[i - 1];
                continue;
            }
            dp[i] = INT_MAX;
            dp[i] = min(costs[0] + dp[(max(0, i - 1))],
            min(costs[1] + dp[(max(0, i - 7))], costs[2] + dp[(max(0, i - 30))]));
        }
        return dp[size];
    }
};