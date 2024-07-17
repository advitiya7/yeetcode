class Solution {
public:
int dp[1001][501];
int f(int i,int time,vector<int>& satisfaction,int n){
    if(i>=n){
        return 0;
    }
    if(dp[i][time]!=-1){
        return dp[i][time];
    }
    int take=INT_MIN;
    int notake=INT_MIN;
    take=time*satisfaction[i]+f(i+1,time+1,satisfaction,n);
    notake=f(i+1,time,satisfaction,n);
    return dp[i][time]=max(take,notake);

}
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        memset(dp,-1,sizeof(dp));
        return f(0,1,satisfaction,n);
    }
};