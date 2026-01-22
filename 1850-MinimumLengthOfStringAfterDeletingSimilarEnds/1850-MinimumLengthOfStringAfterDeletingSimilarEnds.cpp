// Last updated: 1/22/2026, 7:52:58 PM
class Solution {
public:
    int minimumLength(string s){
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(s[l]==s[r]){
                while(s[l]==s[l+1] && l<r){
                    l++;
                }
                l++;
                while(s[r]==s[r-1] && l<r){
                    r--;
                }
                r--;
            }
            else{
                break;
            }
        }
    if(r-l+1<0){
        return 0;
    }
    return r-l+1;
    }
};