class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>vp;
        for(int i=lo;i<=hi;i++){
            int cnt=0;
            int num=i;
            while(num!=1){
                if(num%2!=0){
                    num=3*num+1;
                }
                else{
                    num/=2;
                }
                cnt++;
            }
            vp.push_back({cnt,i});
        }
        sort(vp.begin(),vp.end());
        return vp[k-1].second;
        
    }
};