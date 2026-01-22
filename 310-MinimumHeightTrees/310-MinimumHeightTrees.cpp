// Last updated: 1/22/2026, 7:56:02 PM
class Solution {
public:
// int height(int src, vector<int>&adj[n],vector<int>&vis){
//     queue<pair<int,int>>q;
//     vis[src]
//     q.push({src,0});
//     int max_height=INT_MAX;
//     while(!q.empty()){
//         int node=q.top().first;
//         int height=q.top().second;
//         for(auto it:adj[node]){
//             if(!vis[it]){
//                 vis[it]=1;
//                 max_height=max(max_height,height+1);
//                 q.push({it,height+1});
//             }
//         }
//     }
//     return height;
// }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1){
            return {0};
        }
        vector<int>degree(n,0);
        vector<int>adj[n];
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            degree[it[0]]++;
            degree[it[1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(degree[i]==1){
                q.push(i);
            }
        }
        vector<int>ans;
     while(n>2){ // as there can be atmost 2 roots for even numbers of node
        int size=q.size();
        n-=size;
        while(size--){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                degree[it]--;
                if(degree[it]==1){
                    q.push(it);
                }
            }
        }

     }
     while(!q.empty()){
        ans.push_back(q.front());
        q.pop();
     }
     return ans;
    }
};