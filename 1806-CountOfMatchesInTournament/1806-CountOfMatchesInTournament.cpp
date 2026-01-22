// Last updated: 1/22/2026, 7:53:07 PM
class Solution {
public:
    int numberOfMatches(int n) {
        int cnt=0;
        while(n>1){
        if(n&1){
            cnt+=(n-1)/2;
            n=(n-1)/2+1;
        }
        else{
            cnt+=n/2;
            n=n/2;
        }
    }
    return cnt;
    }
};