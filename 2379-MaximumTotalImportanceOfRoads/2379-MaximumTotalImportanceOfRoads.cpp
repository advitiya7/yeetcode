// Last updated: 1/22/2026, 7:52:30 PM
#define ll long long
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<ll>indegree(n,0);
        for(auto it:roads){
            indegree[it[0]]++;
            indegree[it[1]]++;
        }
        sort(indegree.begin(),indegree.end());
        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=(i+1)*indegree[i];
        }
        return ans;
        
    }
};