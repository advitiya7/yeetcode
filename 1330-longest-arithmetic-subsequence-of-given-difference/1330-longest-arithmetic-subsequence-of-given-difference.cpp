class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        map<int, int> mp;
        int ans = 1;
        for (auto it : arr) {
            int prev = mp.count(it - difference) ? mp[it - difference] : 0;
            mp[it]=prev+1;
            ans = max(ans, mp[it]);
        }
        return ans;
    }
};