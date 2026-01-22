// Last updated: 1/22/2026, 7:57:12 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        vector<int>ans(st.begin(),st.end());
        nums=ans;
        return ans.size();
    

        
    }
};