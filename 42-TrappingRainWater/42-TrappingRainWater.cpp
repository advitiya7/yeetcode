// Last updated: 1/22/2026, 7:57:04 PM
class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        int n=height.size();
        int l=0;
        int r=n-1;
        int leftmaxi,rightmaxi=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=leftmaxi){
                    leftmaxi=height[l];
                }
                else{
                    sum+=leftmaxi-height[l];
                }
                l++;
            }
            else{
                if(height[r]>=rightmaxi){
                    rightmaxi=height[r];
                }
                else{
                    sum+=rightmaxi-height[r];
                }
                r--;
            }
        }
        return sum;
        
    }
};