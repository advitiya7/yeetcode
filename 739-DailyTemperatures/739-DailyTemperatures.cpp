// Last updated: 1/22/2026, 7:55:12 PM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int>st;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                int index=st.top();
                st.pop();
                ans[index]=i-index;
            }
            st.push(i);
        }
        return ans;
        
    }
};