// Last updated: 1/22/2026, 7:53:31 PM
class Solution {
public:
    int kthFactor(int n, int k) {
       vector<int>v(n,0);
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                v[c]=i;
                c++;
            }
        }
        if(v[k-1]==0){
            return -1;
        }
        return v[k-1];
       
    }
};