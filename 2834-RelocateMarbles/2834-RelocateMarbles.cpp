// Last updated: 1/22/2026, 7:51:47 PM
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        vector<int>ans;
        int n=moveFrom.size();
        set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        for(int i=0;i<n;i++){
            if(st.count(moveFrom[i])==1){
                st.erase(moveFrom[i]);
                st.insert(moveTo[i]);
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        // sort(ans.begin(),ans.end());
        return ans;

        
    }
};