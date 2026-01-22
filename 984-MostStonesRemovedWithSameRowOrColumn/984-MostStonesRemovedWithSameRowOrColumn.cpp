// Last updated: 1/22/2026, 7:54:48 PM
class Solution {
public:
void dfs(int &node,vector<vector<int>>& stones,vector<int>&vis){
    vis[node]=1;
    for(int i=0;i<stones.size();i++){
        int row=stones[node][0];
        int col=stones[node][1];
        if(!vis[i] && (row==stones[i][0] || col==stones[i][1])){
            dfs(i,stones,vis);
        }
    }
}
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,stones,vis);
            }
        }
        return n-cnt;
        
    }
};