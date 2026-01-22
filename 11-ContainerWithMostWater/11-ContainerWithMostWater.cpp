// Last updated: 1/22/2026, 7:57:43 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int ans=0;
        while(l<r){
            int area=min(height[l],height[r])*(r-l);
            ans=max(ans,area);
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return ans;
        
    }
};