// Last updated: 1/22/2026, 7:54:52 PM
class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int>ans={1};
        while(ans.size()<n){
            vector<int>res;
            for(auto i:ans){
                if(i*2-1<=n){
                    res.push_back(i*2-1);
                }
            }
            for(auto i:ans){
                if(i*2<=n){
                    res.push_back(i*2);
                }
            }
            ans=res;
        }
        return ans;
        
    }
};