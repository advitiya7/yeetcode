// Last updated: 1/22/2026, 7:50:47 PM
class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans = 0;
        int i = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int j=i;
            while (j + 1 < n && nums[j] != nums[j + 1]){
                j++;
            }
            long long len=j-i+1;
            ans+=(long long)(len*(len+1)/2);
            i=j;
        }
        return ans;
    }
};