// Last updated: 1/22/2026, 7:52:46 PM
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long>prefix(n);
        vector<int>ans;
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(i<k || n-1-i<k){
                ans.push_back(-1);
            }
            else{
                int l=i-k;
                int h=i+k;
                if(l-1<0){
                    ans.push_back(prefix[h]/(2*k+1));
                }
                else{
                    ans.push_back((prefix[h]-prefix[l-1])/(2*k+1));
                }
            }
        }
        return ans;
        
    }
};