1class Solution {
2public:
3    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
4        vector<int>graph[numCourses];
5        for(auto it:prerequisites){
6            graph[it[0]].push_back(it[1]);
7        }
8        vector<int>indg(numCourses,0);
9        for(int i=0;i<numCourses;i++){
10            for(auto it:graph[i]){
11                indg[it]++;
12            }
13        }
14        queue<int>q;
15        for(int i=0;i<numCourses;i++){
16            if(indg[i]==0){
17                q.push(i);
18            }
19        }
20        int cnt=0;
21        while(!q.empty()){
22            int node=q.front();
23            cnt++;
24            q.pop();
25            for(auto it:graph[node]){
26                indg[it]--;
27                if(indg[it]==0){
28                    q.push(it);
29                }
30            }
31
32        }
33        if(cnt==numCourses){
34            return true;
35        }
36        return false;
37
38        
39    }
40};