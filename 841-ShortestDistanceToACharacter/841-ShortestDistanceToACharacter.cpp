// Last updated: 1/22/2026, 7:55:07 PM
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>indx;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                indx.push_back(i);
            }
        }
        for(int i=0;i<s.size();i++){
            int dist=INT_MAX;
            for(int j=0;j<indx.size();j++){
                dist=min(dist,abs(i-indx[j]));
            }
            ans.push_back(dist);
        }
        return ans;
        
        
    }
};