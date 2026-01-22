// Last updated: 1/22/2026, 7:52:40 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int count = 0;
        int n = nums.size();
        vector<int> smaller, greater; //
        vector<int>ans(n);
       for(int i=0;i<n;i++){
        if(nums[i]<pivot){
            smaller.push_back(nums[i]);
        }
        else if(nums[i]==pivot){
            count++;
        }
        else if(nums[i]>pivot){
            greater.push_back(nums[i]);
        }
       }
       for(int i=0;i<smaller.size();i++){
        ans[i]=smaller[i];
       }
       for(int i=0;i<count;i++){
        ans[i+smaller.size()]=pivot;
       }
       for(int i=0;i<greater.size();i++){
        ans[i+smaller.size()+count]=greater[i];
       }
       return ans;
    }
};