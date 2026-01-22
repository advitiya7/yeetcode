// Last updated: 1/22/2026, 7:54:20 PM
class Solution {
public:
int sum(int mid,vector<int>& arr, int target){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=min(arr[i],mid);
    }
    return abs(sum-target);
}
bool condition(int mid,vector<int>& arr, int target){
    return sum(mid,arr,target)<=sum(mid+1,arr,target);
}
    int findBestValue(vector<int>& arr, int target) {
        int l=0;
        int r=*max_element(arr.begin(),arr.end());
        while(l<r){
            int m=l+(r-l)/2;
            if(condition(m,arr,target)){
                r=m;
            }
            else{
                l=m+1;
            }
        }
        return l;
        
    }
};