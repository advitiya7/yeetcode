// Last updated: 1/22/2026, 7:51:24 PM
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n=words.size();
        string ans;
        for(int i=0;i<n;i++){
            string t=words[i];
             ans+=t[0];
    }
    if(ans==s){
        return true;
    }
    return false;
        
    }
};