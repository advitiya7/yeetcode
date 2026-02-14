1class Solution {
2public:
3    //Using Kahn's algorithm
4    vector<int> topologicalSortCheck(unordered_map<int, vector<int>> &adj, int n, vector<int> &indegree) {
5        queue<int> que;
6        int count = 0;
7        vector<int> result;
8        
9        for(int i = 0; i<n; i++) {
10            if(indegree[i] == 0) {
11                result.push_back(i);
12                count++;
13                que.push(i);
14            }
15        }
16        
17        
18        while(!que.empty()) {
19            int u = que.front();
20            que.pop();
21            
22            for(int &v : adj[u]) {
23                
24                indegree[v]--;
25                
26                if(indegree[v] == 0) {
27                    result.push_back(v);
28                    count++;
29                    que.push(v);
30                }
31                
32            }
33            
34        }
35        
36        if(count != n)
37            return {};
38        
39        return result;
40    }
41    
42    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
43        unordered_map<int, vector<int>> adj;
44        
45        vector<int> indegree(numCourses, 0); //kahn's algo
46        
47        for(auto &vec : prerequisites) {
48            int a = vec[0];
49            int b = vec[1];
50            
51            //b ---> a
52            adj[b].push_back(a);
53            
54            //arrow ja raha hai 'a' me
55            indegree[a]++;
56        }
57        
58        
59        //if cycle is present, not possible
60        
61        return topologicalSortCheck(adj, numCourses, indegree);
62    }
63};
64