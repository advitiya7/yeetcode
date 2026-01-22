// Last updated: 1/22/2026, 7:56:21 PM
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>graph[numCourses];
        for(auto it:prerequisites){
            graph[it[0]].push_back(it[1]);
        }
        vector<int>indg(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it:graph[i]){
                indg[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indg[i]==0){
                q.push(i);
            }
        }
        int cnt=0;
        while(!q.empty()){
            int node=q.front();
            cnt++;
            q.pop();
            for(auto it:graph[node]){
                indg[it]--;
                if(indg[it]==0){
                    q.push(it);
                }
            }

        }
        if(cnt==numCourses){
            return true;
        }
        return false;

        
    }
};