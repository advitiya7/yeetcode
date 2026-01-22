// Last updated: 1/22/2026, 7:52:22 PM
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int>ans(m);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }

for(int i=0;i<m;i++){
    int target=upper_bound(begin(nums),end(nums),queries[i])-begin(nums);
    ans[i]=target;

}
return ans;
    }
};