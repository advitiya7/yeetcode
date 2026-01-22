// Last updated: 1/22/2026, 7:52:10 PM
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        if (n == 2) {
            return skill[0] * skill[1];
        }
        int i = 0;
        int j = n - 1;
        sort(skill.begin(), skill.end());
        set<int> st;
        for (int i = 0; i < n / 2; i++) {
            st.insert(skill[i] + skill[n - i - 1]);
        }
        if (st.size() != 1) {
            return -1;
        }
        long long ans=0;
        for(int i=0;i<n/2;i++){
            ans+=(skill[i]*skill[n-i-1]);
        }
        return ans;
    }
};