// Last updated: 1/22/2026, 7:54:28 PM
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>sorted(heights.begin(),heights.end());
        sort(sorted.begin(),sorted.end());
        int ans=0;
        for(int i=0;i<heights.size();i++){
            if(sorted[i]!=heights[i]){
                ans++;
            }
        }
        return ans;
    }
};