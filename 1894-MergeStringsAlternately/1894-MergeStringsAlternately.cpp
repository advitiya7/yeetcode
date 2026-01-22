// Last updated: 1/22/2026, 7:52:56 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = min(word1.size(), word2.size());
        for(int i = 0; i<n; i++){
            ans += word1[i];
            ans += word2[i];
        }

        ans += word1.substr(n);
        ans += word2.substr(n);

        return ans;
    }
};