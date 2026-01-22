// Last updated: 1/22/2026, 7:52:52 PM
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        map<int,int>mp;
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            mp[u]++;
            mp[v]++;
        }
        for(auto it:mp){
            if(it.second==n){
                return it.first;
            }
        }
        
        return -1;
    }
};