// Last updated: 1/22/2026, 7:52:27 PM
class Solution {
public:
    int ans = -1;
    void dfs(int node, vector<int>& edges, vector<int> &vis, vector<int> &inrecur,
             vector<int> &count) {
                if(node!=-1){
                vis[node]=1;
                inrecur[node]=1;
                }
                int u=edges[node];
                if(u!=-1 && !vis[u]){
                    count[u]=1+count[node];
                    dfs(u,edges,vis,inrecur,count);
                }
                else if(u!=-1 && inrecur[u]==true){
                    ans=max(ans,count[node]-count[u]+1);
                }
                inrecur[node]=false;

             }
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<int> vis(n, 0);
        vector<int> inrecur(n, 0);
        vector<int> count(n, 1);
        for (int i = 0; i < edges.size(); i++) {
            if (!vis[i]) {
                dfs(i,edges,vis,inrecur,count);
            }
        }
        return ans;
    }
};