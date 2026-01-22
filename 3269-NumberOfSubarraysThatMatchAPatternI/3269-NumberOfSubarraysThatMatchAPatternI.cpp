// Last updated: 1/22/2026, 7:50:56 PM
class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n=nums.size();
        int m=pattern.size();
        int cnt=0;
        for(int i=0;i<=n-m-1;i++){ // as the size of the subarray is already given
            int k=0;
            while(k<m){
                if(pattern[k]==1 && nums[i+k+1]>nums[i+k]){
                    k++;
                }
                else if(pattern[k]==0 && nums[i+k+1]==nums[i+k]){
                    k++;
                }
                else if(pattern[k]==-1 && nums[i+k+1]<nums[i+k]){
                    k++;
                }
                else{
                    break;
                }
            }
            if(k==m){
                cnt++;
            }
        }
        return cnt;  
    }
};