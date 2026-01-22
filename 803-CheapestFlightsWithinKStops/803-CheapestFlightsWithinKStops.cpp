// Last updated: 1/22/2026, 7:55:08 PM
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
        for(auto it:flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int>dist(n,1e9);
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}}); // stops, src and dist
        dist[src]=0;
        while(!q.empty()){
            int stops=q.front().first;
            int node=q.front().second.first;
            int cost=q.front().second.second;
            q.pop();
            if(stops>k){
                continue;
            }
            for(auto it:adj[node]){
                int adjnode=it.first;
                int wgt=it.second;
                if(dist[adjnode]>cost+wgt && stops<=k){
                    dist[adjnode]=cost+wgt;
                    q.push({stops+1,{adjnode,cost+wgt}});
                }
            }
        }
        if(dist[dst]==1e9){
            return -1;
        }
        return dist[dst];

    }
};