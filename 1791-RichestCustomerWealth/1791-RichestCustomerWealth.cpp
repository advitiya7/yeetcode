// Last updated: 1/22/2026, 7:53:08 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx_sum=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(auto it:accounts[i]){
                sum+=it;
                mx_sum=max(sum,mx_sum);
            }
        }
        return mx_sum;
        
    }
};