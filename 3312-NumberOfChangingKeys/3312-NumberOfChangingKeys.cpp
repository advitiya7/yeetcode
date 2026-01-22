// Last updated: 1/22/2026, 7:50:53 PM
class Solution {
public:
    int countKeyChanges(string s) {
        int n=s.size();
        int cnt=0;
        string st="";
        for(auto it:s){
            st+=tolower(it);
        }
        for(int i=0;i<n-1;i++){
            if(st[i]!=st[i+1]){
                cnt++;
            }
        }
        
        return cnt;
        
    }
};