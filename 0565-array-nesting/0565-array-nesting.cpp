class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        int ans=0;
        for(int i=0;i<n;i++){
           int cnt=0;
           int j=i;
            while(st.find(nums[j])==st.end()){
                st.insert(nums[j]);
                cnt++;
                j=nums[j];
            }
            ans=max(ans,cnt);

        }
        return ans;
        
    }
};