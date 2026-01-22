// Last updated: 1/22/2026, 7:54:30 PM
class Solution {
public:
    int n;
    // int dp[1001][1001];
    static bool cmp(string& s1, string& s2) { return s1.size() < s2.size(); }
    bool isPred(string& s1, string& s2) {
        int M = s1.size();
        int N = s2.size();
        if (M >= N || N - M != 1) {
            return false;
        }
        int i = 0;
        int j = 0;
        while (i < M && j < N) {
            if (s1[i] == s2[j]) {
                i++;
            }
            j++;
        }
        return i == M;
    }
    // int lis(int i, int j,vector<string>& words) {
    //     if (i == n) {
    //         return 0;
    //     }
    //     if(j!=-1 && dp[i][j]!=-1){
    //         return dp[i][j];
    //     }
    //     int skip = 0 + lis(i + 1, j, words);
    //     int taken = 0;
    //     if (j == -1 || isPred(words[j], words[i])) {
    //         taken = 1 + lis(i + 1, i, words);
    //     }
    //     if(j!=-1){
    //         dp[i][j]=max(skip,taken);
    //     }
    //    return  max(skip, taken);
    // }
    int longestStrChain(vector<string>& words) {
        n = words.size();
        sort(words.begin(), words.end(), cmp);
       vector<int>dp(n,1);
      int ans=1;
       for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(isPred(words[j],words[i])){
                dp[i]=max(dp[i],1+dp[j]);
                ans=max(ans,dp[i]);
            }
        }
       }
       return ans;
    }
};