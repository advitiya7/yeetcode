// Last updated: 1/22/2026, 7:54:49 PM
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int l=0;
        int r=n-1;
        int ans=0;
        int mans=0;
        sort(tokens.begin(),tokens.end());
        while(l<=r){
            if(tokens[l]<=power){
                ans++;
                mans=max(mans,ans);
                power-=tokens[l];
                l++;
            }
            else if(ans>=1){
                power+=tokens[r];
                ans--;
                r--;
            }
            else{
                break;
            }
        }
        return mans;
        
    }
};