// Last updated: 1/22/2026, 7:51:10 PM
class Solution {
public:
    int minChanges(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n-1;i+=2){
            if(s[i]!=s[i+1]){
                cnt++;
            }
        }
        return cnt;

        
    }
};