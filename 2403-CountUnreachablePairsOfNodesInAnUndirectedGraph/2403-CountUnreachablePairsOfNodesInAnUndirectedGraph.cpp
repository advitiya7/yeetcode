// Last updated: 1/22/2026, 7:52:32 PM
#define ll long long
class Solution {
public:
void dfs(int node,vector<vector<ll>>&adj,vector<ll>&totalvis,ll &cnt){
    // vis[node]=1;
    totalvis[node]=1;
    cnt++;
    for(auto it:adj[node]){
        if(!totalvis[it]){
            // vis[it]=1;
            totalvis[it]=1;
            dfs(it,adj,totalvis,cnt);
        }
    }

}
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<ll>>adj(n);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<ll>totalvis(n,0);
        ll ans=0;
        for(int i=0;i<n;i++){
            // vector<ll>vis(n,0);
            if(!totalvis[i]){
            ll cnt=0;
            dfs(i,adj,totalvis,cnt);
             ans+=cnt*(n-cnt);
            }
           
        }
        return ans/2;
        
    }
};