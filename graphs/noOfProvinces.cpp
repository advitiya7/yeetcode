class Solution {
public:
void dfs(vector<int>adj[],int node,vector<int>&vs){
    vs[node]=1;
    for(auto it:adj[node]){
        if(!vs[it]){
            dfs(adj,it,vs);
        }
    }

}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<int>adj[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>vs(V,0);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vs[i]){
                cnt++;
                dfs(adj,i,vs);
            }
    }
    return cnt;
    }
};