// Last updated: 1/22/2026, 7:53:10 PM
class Solution {
public:
    vector<vector<int>> dp;
    const int INF = INT_MAX / 2; // Define a constant for infinity

    // Recursive function with memoization
    int f(unordered_set<int> &st, int a, int b, int x, int curr_idx, bool forwardJump) {
        // Base cases
        if (curr_idx == x) return 0;  // Reached target
        if (curr_idx < 0 || st.find(curr_idx) != st.end() || curr_idx > 6000) return INF;  // Out of bounds or forbidden

        // Return memoized result if already computed
        if (dp[curr_idx][forwardJump] != -1) return dp[curr_idx][forwardJump];

        // Initialize current state with infinity
        dp[curr_idx][forwardJump] = INF;

        // Move forward by 'a' units and add 1 jump
        dp[curr_idx][forwardJump] = 1 + f(st, a, b, x, curr_idx + a, true);

        // If the last jump was forward, try moving backward by 'b' units
        if (forwardJump) {
            dp[curr_idx][forwardJump] = min(dp[curr_idx][forwardJump], 1 + f(st, a, b, x, curr_idx - b, false));
        }

        return dp[curr_idx][forwardJump];
    }

    // Main function to compute the minimum number of jumps
    int minimumJumps(vector<int> &forbidden, int a, int b, int x) {
        unordered_set<int> st(forbidden.begin(), forbidden.end());  // Convert forbidden list to set for quick lookup
        dp.clear();  // Clear any previous state
        dp.resize(6001, vector<int>(2, -1));  // Resize memoization table

        // Compute result using the recursive function
        int ans = f(st, a, b, x, 0, true);

        // Return result or -1 if no valid jumps found
        return ans >= INF ? -1 : ans;
    }
};