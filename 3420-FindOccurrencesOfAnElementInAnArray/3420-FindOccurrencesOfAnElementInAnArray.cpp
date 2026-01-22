// Last updated: 1/22/2026, 7:50:45 PM
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
    vector<int>v;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==x){
            v.push_back(i);
        }
    }
    int n=v.size();
    for(auto it:queries){
        if(n>=it){
            ans.push_back(v[it-1]);
        }
        else{
            ans.push_back(-1);
        } 
    }
    return ans;
    }
    
};