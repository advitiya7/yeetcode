// Last updated: 1/22/2026, 7:57:39 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int tar=0;
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<vector<int>>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==tar){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum>tar){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        for(auto it:st){
            res.push_back(it);

        }
        return res;
        
    }
};