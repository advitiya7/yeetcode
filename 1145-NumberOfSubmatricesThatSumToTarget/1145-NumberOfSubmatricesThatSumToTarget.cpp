// Last updated: 1/22/2026, 7:54:27 PM
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int ans=0;
        // prefix sum row wise
        for(int i=0;i<r;i++){
            for(int j=1;j<c;j++){
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        // travelling the prefix array in the downward direction
        for(int i=0;i<c;i++){
            for(int j=i;j<c;j++){ //col
                // now here we travel in the downward direction
                unordered_map<int,int>mp;
                mp.insert({0,1});
                int sum=0;
                for(int k=0;k<r;k++){ // row
                sum+=matrix[k][j]-(i>0?matrix[k][i-1]:0);
                if(mp.find(sum-target)!=mp.end()){
                    ans+=mp[sum-target];
                }
                   mp[sum]++;
                }
            }
        }
        return ans;

        
    }
};