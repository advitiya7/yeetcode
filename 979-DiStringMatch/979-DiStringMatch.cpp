// Last updated: 1/22/2026, 7:54:50 PM
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int count=s.size();
        int left=0,right=count;
        vector<int>ans;
        for(char ch:s){
            if(ch=='I'){
                ans.push_back(left);
                left++;
            }
            else if(ch=='D'){
                ans.push_back(right);
                right--;
            }
        }
        ans.push_back(left);
        return ans;
    }

};