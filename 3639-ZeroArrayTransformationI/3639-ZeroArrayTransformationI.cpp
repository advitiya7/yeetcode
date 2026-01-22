// Last updated: 1/22/2026, 7:50:18 PM
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=queries.size();
    vector<int>sweep(n+1,0);
    for(int i=0;i<m;i++){
        sweep[queries[i][0]]++;
        sweep[queries[i][1]+1]--;
    }
    for(int i=1;i<=n;i++){
        sweep[i]=sweep[i]+sweep[i-1];
    }
    for(int i=0;i<n;i++){
        if(nums[i]>sweep[i]){
            return false;
        }
    }
    return true;
   
    }
};