// Last updated: 1/22/2026, 7:55:02 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int l=0;
        int r=arr.size()-1;
        while(l<r){
            int m=l+(r-l)/2;
            if(arr[m]>arr[m+1]){
                r=m;
            }
            else{
                l=m+1;
            }
        }
          return l;
        
    }
};