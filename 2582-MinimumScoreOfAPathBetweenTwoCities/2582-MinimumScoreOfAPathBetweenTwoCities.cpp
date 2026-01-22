// Last updated: 1/22/2026, 7:52:09 PM
class Solution {
public:
void dfs(int node, vector<pair<int,int>>adj[],vector<int>&vis,int &ans){
    vis[node]=1;
    for(auto it:adj[node]){
        ans=min(ans,it.second);
        if(!vis[it.first]){
            dfs(it.first,adj,vis,ans);
        }
    }
}
    int minScore(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>>adj[n+1];
        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<int>vis(n+1,0);
        int ans=INT_MAX;
        dfs(1,adj,vis,ans);
        return ans;
        
    }
};