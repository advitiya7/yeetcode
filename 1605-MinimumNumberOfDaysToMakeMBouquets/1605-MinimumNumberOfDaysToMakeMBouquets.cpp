// Last updated: 1/22/2026, 7:53:27 PM
class Solution {
public:
bool condition(vector<int>& bloomDay,int m, int k,int mid){
    int flo=0;
    int bouquets=0;
    for(int i=0;i<bloomDay.size();i++){
        if(mid<bloomDay[i]){
            flo=0;
        }
        else{
            bouquets+=(flo+1)/k;
            flo=(flo+1)%k; // adding one as we are calculating the no of flowers including the current flower
            // total no of bouquets that can be ade with including the current flower
        }
    }
    return bouquets>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(n<1ll*m*k){
            return -1;
        }
        int left=1;
        int right=*max_element(bloomDay.begin(),bloomDay.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(condition(bloomDay,m,k,mid)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }

        return left;

    }
};