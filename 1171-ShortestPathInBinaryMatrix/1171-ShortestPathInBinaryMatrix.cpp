// Last updated: 1/22/2026, 7:54:23 PM
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]){
            return -1;
        }
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{0,0}});
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
        dist[0][0]=0;
        int delRow[]={-1,1,0,0,-1,-1,1,1};
        int delCol[]={0,0,1,-1,1,-1,-1,1};
        while(!q.empty()){
            int wt=q.front().first;
            int x=q.front().second.first;
            int y=q.front().second.second;
            q.pop();
            for(int i=0;i<8;i++){
                int nrow=x+delRow[i];
                int ncol=y+delCol[i];
                if(nrow>=0 && nrow<n && ncol<n && ncol>=0 && grid[nrow][ncol]==0 && 1+wt<dist[nrow][ncol]){
                    dist[nrow][ncol]=1+wt;
                    q.push({1+wt,{nrow,ncol}});
                }
            }
        }
        return dist[n-1][n-1]==INT_MAX?-1:dist[n-1][n-1]+1;

    }
};