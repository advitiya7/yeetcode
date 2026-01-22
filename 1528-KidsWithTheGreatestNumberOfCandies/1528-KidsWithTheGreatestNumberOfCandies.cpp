// Last updated: 1/22/2026, 7:53:37 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool>ans;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
        
    }
};