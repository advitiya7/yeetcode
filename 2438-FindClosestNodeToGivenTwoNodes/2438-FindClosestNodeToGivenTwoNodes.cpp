// Last updated: 1/22/2026, 7:52:29 PM
class Solution {
public:
void dfs(int node,vector<int>& edges,vector<int>&vis,vector<int>&dist){
    if(node!=-1){
        vis[node]=1;
    }
    int v=edges[node];
    if(v!=-1 && !vis[v]){
        vis[v]=1;
        dist[v]=1+dist[node];
        dfs(v,edges,vis,dist);
    }
}
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        vector<int>vis1(n,0);
        vector<int>vis2(n,0);
        vector<int>dist1(n,INT_MAX);
        vector<int>dist2(n,INT_MAX);
        dist1[node1]=0;
        dist2[node2]=0;
        dfs(node1,edges,vis1,dist1);
        dfs(node2,edges,vis2,dist2);
        int maxi=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++){
           int maxDist=max(dist1[i],dist2[i]);
            if(maxi>maxDist){
                maxi=maxDist;
                idx=i;
            }

        }
        return idx;


        
    }
};