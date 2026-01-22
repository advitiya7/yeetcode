// Last updated: 1/22/2026, 7:53:59 PM
class Solution {
public:
int exactlyK(vector<int>& nums, int k){
    int n=nums.size();
    int cnt=0;
    int ans=0;
    int i=0;
    int j=0;
while(j<n){
        if(nums[j]%2!=0){
            cnt++;
        }
        while(cnt>k){
            if(nums[i]%2!=0){
                cnt--;
            }
            i++;
        }
        ans+=j-i+1;
        j++;
    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return exactlyK(nums,k)-exactlyK(nums,k-1);
        
    }
};