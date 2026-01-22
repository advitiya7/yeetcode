// Last updated: 1/22/2026, 7:50:24 PM
class Solution {
public:
    string losingPlayer(int x, int y) {
        int cnt=0;
        
        while(x>=1 && y>=4){
            cnt++;
            x=x-1;
            y=y-4;
        }
        if(cnt&1){
            return "Alice";
        }
        return "Bob";
        
    }
};