// Last updated: 1/22/2026, 7:50:09 PM
class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n=s.size();
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
            cnt1++;
        }
        else{
            cnt2++;
        }
        
    }
    return abs(cnt1-cnt2);
    }
};