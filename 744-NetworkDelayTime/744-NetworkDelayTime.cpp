// Last updated: 1/22/2026, 7:55:26 PM
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(auto it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int>dist(n+1,1e9);
        dist[k]=0;
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,k});
        while(!pq.empty()){
            int time=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it:adj[node]){
                int adjnode=it.first;
                int edg=it.second;
                if(dist[adjnode]>edg+time){
                    dist[adjnode]=edg+time;
                    pq.push({edg+time,adjnode});
                }

            }
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
            ans=max(ans,dist[i]);

        }
        if(ans==1e9){
            return -1;
        }
        return ans;

        
    }
};