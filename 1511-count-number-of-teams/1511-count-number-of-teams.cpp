class Solution {
public:
    int dp1[1002][1002][4];
    int dp2[1002][1002][4];
    int solve_inc(int ind, int prev, int len, vector<int> &rating){
        int n=rating.size();
        if(len==0){
            return 1;
        }
        if(ind==n){
            return 0;
        }
        if(dp1[ind][prev+1][len]!=-1){
            return dp1[ind][prev+1][len];
        }
        int ans=0;
        if(prev==-1 || rating[ind]>rating[prev]){
            ans+=solve_inc(ind+1,ind,len-1,rating);
        }
        ans+=solve_inc(ind+1,prev,len,rating);
        return dp1[ind][prev+1][len]=ans;
    }
    int solve_dec(int ind, int prev, int len, vector<int> &rating){
        int n=rating.size();
        if(len==0){
            return 1;
        }
        if(ind==n){
            return 0;
        }
        if(dp2[ind][prev+1][len]!=-1){
            return dp2[ind][prev+1][len];
        }
        int ans=0;
        if(prev==-1 || rating[ind]<rating[prev]){
            ans+=solve_dec(ind+1,ind,len-1,rating);
        }
        ans+=solve_dec(ind+1,prev,len,rating);
        return dp2[ind][prev+1][len]=ans;
    }
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int len=3;
        memset(dp1,-1,sizeof(dp1));
        memset(dp2,-1,sizeof(dp2));
        int ans=solve_inc(0,-1,len,rating);
        ans+=solve_dec(0,-1,len,rating);
        return ans;
    }
};