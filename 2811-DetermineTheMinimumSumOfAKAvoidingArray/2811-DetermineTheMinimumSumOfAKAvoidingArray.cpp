// Last updated: 1/22/2026, 7:51:53 PM
class Solution {
public:
    int minimumSum(int n, int k) {
    
unordered_set<int> st;
    int ans = 0;
    for(int i = 1; st.size() < n; ++i ){
        if(st.find(k - i) == st.end()) { st.insert(i); ans += i; }
    }
    return ans;
        
    }
};