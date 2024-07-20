class Solution {
public:
void bfs(int src,vector<int>&ans,vector<vector<int>>&adj,int n){
    queue<int>q;
    vector<int>vis(n+1,0);
    q.push(src);
    vis[src]=1;
    int h=0;
    while(!q.empty()){
        int size=q.size();
        int cnt=0;
        for(int i=0;i<size;i++){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    cnt++;
                    q.push(it);

                }
            }
        }
        ans[h]+=cnt;
        h++;

    }
}
    vector<int> countOfPairs(int n, int x, int y) {
        vector<vector<int>>adj(n+1);
        adj[x].push_back(y);
        adj[y].push_back(x);
        for(int i=1;i<n;i++){
            adj[i].push_back(i+1);
            adj[i+1].push_back(i);
        }
        vector<int>ans(n);
        for(int i=1;i<=n;i++){
            bfs(i,ans,adj,n);
        }
        return ans;
        
    }
};