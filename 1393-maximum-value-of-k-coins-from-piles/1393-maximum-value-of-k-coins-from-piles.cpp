class Solution {
public:
int dp[1001][2001];
int f(int i,vector<vector<int>>&piles,int k){
    if(i>=piles.size()){
        return 0;
    }
    if(dp[i][k]!=-1){
        return dp[i][k];
    }
    int notake=f(i+1,piles,k);
    int take=0;
    int ans=0;
    for(int j=0;j<min((int)piles[i].size(),k);j++){
        ans+=piles[i][j];
        if(k-(j+1)>=0){
            take=max(take,ans+f(i+1,piles,k-(j+1)));

        }
    }
    return dp[i][k]=max(notake,take);
    
}
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
        memset(dp,-1,sizeof(dp));
        return f(0,piles,k);

        
    }
};