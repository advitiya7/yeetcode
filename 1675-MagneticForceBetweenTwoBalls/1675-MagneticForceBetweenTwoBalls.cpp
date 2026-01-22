// Last updated: 1/22/2026, 7:53:24 PM
class Solution {
public:
bool predicate(vector<int>& position,int mid,int m){
    int cnt=1;
    int posi=position[0];
    for(int i=1;i<position.size();i++){
        if(position[i]-posi>=mid){
            cnt++;
            posi=position[i];
        }
    }
    return cnt>=m;
}
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int l=0;
        int r=position[n-1]-position[0];
        while(l<=r){
            int mid=l+(r-l)/2;
            if(predicate(position,mid,m)){
            l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return l-1;
    }
};