1class Solution {
2public:
3    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
4        unordered_map<int,set<int>> map;
5        vector<int> res(k,0);
6        for(auto &log : logs){
7            map[log[0]].insert(log[1]);
8        }
9        for(auto i : map){
10            res[i.second.size()-1]++;
11        }
12        return res;
13    }
14};