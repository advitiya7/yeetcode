class Solution {
public:
    long long coloredCells(int n) {
        long long size=1e5+1;
        vector<long long>ans(size);
        ans[0]=0;
        ans[1]=1;
        for(int i=2;i<size;i++){
            ans[i]=4*(i-1)+ans[i-1];
        }
        return ans[n];
        
    }
};