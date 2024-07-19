class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find(int x) {
        if (x == parent[x])
            return x;

        return parent[x] = find(parent[x]);
    }

    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);

        if (x_parent == y_parent)
            return;

        if (rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        } else if (rank[x_parent] < rank[y_parent]) {
            parent[x_parent] = y_parent;
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        parent.resize(n);
        rank.resize(n,0);
        int sz=connections.size();
        int connectedComp=n;
        if(sz<n-1){
            return -1;
        }
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(auto it:connections){
            if(find(it[0])!=find(it[1])){
                connectedComp--;
                Union(it[0],it[1]);
                
            }
        }
        return connectedComp-1;
    }
};