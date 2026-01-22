// Last updated: 1/22/2026, 7:53:30 PM
class Solution {
public:
void dfs(int node,vector<pair<int,int>>adj[],vector<int>&vis,int &cnt){
vis[node]=1;
for(auto it:adj[node]){
    int v=it.first;
    int u=it.second;
    if(!vis[v]){
        cnt+=u;
        dfs(v,adj,vis,cnt);
    }
}
}
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<pair<int,int>>adj[n];
        vector<int>vis(n,0);
        for(auto it:connections){
            adj[it[0]].push_back({it[1],1});
            adj[it[1]].push_back({it[0],0});
        }
        int cnt=0;
        dfs(0,adj,vis,cnt);
        return cnt;
    }
};