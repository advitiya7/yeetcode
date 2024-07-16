class Solution {
public:
int dp[366];
    int f(int i, vector<int>& days, vector<int>& costs,int n) {
        if (i >= n) {
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int cost1 = costs[0] + f(i + 1, days, costs,n);
        int idx1 = i;
        while (idx1 < n && days[idx1] <days[i] + 7) {
            idx1++;
        }
        int cost2 = costs[1] + f(idx1, days, costs,n);
        int idx2 = i;
        while (idx2 < n && days[idx2] <days[i] + 30) {
            idx2++;
        }
        int cost3 = costs[2] + f(idx2, days, costs,n);

        return dp[i]=min(cost1,min(cost2,cost3));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        memset(dp,-1,sizeof(dp));
        return f(0, days, costs,n);
    }
};