// Last updated: 1/22/2026, 7:56:51 PM
class Solution {
public:
bool f(int i,int j,string &s1, string &s2, string &s3,vector<vector<int>>&dp){
if(i==s1.size() && j==s2.size() && i+j==s3.size()){
    return true;
}
if(dp[i][j]!=-1){
return dp[i][j];
}
bool ans=false;
if(i<s1.size() && j<s2.size() && s1[i]==s3[i+j] && s2[j]==s3[i+j]){
ans= f(i+1,j,s1,s2,s3,dp) || f(i,j+1,s1,s2,s3,dp);
}
else if(i<s1.size() && s1[i]==s3[i+j]){
    ans=f(i+1,j,s1,s2,s3,dp);
}
else if(j<s2.size() && s2[j]==s3[i+j]){
    ans=f(i,j+1,s1,s2,s3,dp);
}
return dp[i][j]=ans;

}
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>>dp(101,vector<int>(101,-1));
        if(s1.size()+s2.size()!=s3.size()){
            return false;
        }
        return f(0,0,s1,s2,s3,dp);
        
    }
};