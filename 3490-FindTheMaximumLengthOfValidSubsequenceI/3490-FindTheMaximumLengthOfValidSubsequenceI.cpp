// Last updated: 1/22/2026, 7:50:30 PM
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int co=0, ce=0, c=0, f=-1;
        for(auto i:nums){
            if(i%2){
                co++;
                if(f!=1){
                    c++;
                    f=1;
                }
            }
            else{
                ce++;
                if(f!=0){
                    c++;
                    f=0;
                }
            }
        }
        return max({co, ce, c});
    }
};