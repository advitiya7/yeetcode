// Last updated: 1/22/2026, 7:51:13 PM
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference,
                            int valueDifference) {
        int n = nums.size();
        if (n - indexDifference < 0) {
            return {-1, -1};
        }
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int maxid = 0;
        int minid = 0;
        for (int i = 0; i < n - indexDifference;
             i++) { // fixing the index difference
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxid = i;
            }
            if (nums[i]<mini){
                mini=nums[i];
                minid=i;
            }
            if(abs(maxi-nums[i+indexDifference])>=valueDifference){
                return {maxid,i+indexDifference};
            }
               if(abs(mini-nums[i+indexDifference])>=valueDifference){
                return {minid,i+indexDifference};
            }
        }
        return {-1,-1};
    }
};