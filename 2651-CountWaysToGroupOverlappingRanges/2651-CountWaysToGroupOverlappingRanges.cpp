// Last updated: 1/22/2026, 7:52:04 PM
class Solution {
public:
int pow(int n){
    int cnt=1;
    while(n--){
    cnt=(cnt*2)%1000000007;
    }
    return cnt;

}
    int countWays(vector<vector<int>>& ranges) {
         vector<vector<int>>ans;
        if(ranges.size()==0){
            return 0;
        }
        sort(ranges.begin(),ranges.end());
        vector<int>temp=ranges[0];
        for(auto it:ranges){
            if(temp[1]>=it[0]){
                temp[1]=max(temp[1],it[1]);
            }
            else{
                ans.push_back(temp);
                temp=it;
            }
        }
        // pushing last
        ans.push_back(temp);
        return pow(ans.size());

        
        
    }
};