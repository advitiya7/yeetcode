// Last updated: 1/22/2026, 7:57:38 PM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int res=0;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                // int closesum=abs(target-sum);
                if(sum==target){
                    return sum;
                }
                else if(abs(sum-target)<abs(ans)){
                    ans=sum-target;
                    res=sum;
                }
                if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return res;
        
    }
};