// Last updated: 1/22/2026, 7:50:38 PM
class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<m;i++){
            nums2[i]=nums2[i]*k;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]%nums2[j]==0){
                    cnt++;
                }
            }
        }
        return cnt;

        
    }
};