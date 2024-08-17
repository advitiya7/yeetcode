class Solution {
public:
int dp[501];
int f(int i,vector<int>&arr,int k){
    if(i>=arr.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int sum=0;
    int maxi=0;
    for(int j=i;j<arr.size();j++){
        maxi=max(maxi,arr[j]);
        if(j-i+1<=k){
            sum=max(sum,maxi*(j-i+1)+f(j+1,arr,k));
        }
    }
    return dp[i]=sum;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        memset(dp,-1,sizeof(dp));
        return f(0,arr,k);

        
    }
};