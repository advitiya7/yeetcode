// Last updated: 1/22/2026, 7:57:20 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // as the vector of strings are sorted in a lexiographically order we can easily do it by sorting the strings and the first and the last string will have the least common characters so we can find our longest common prefix there
        string ans="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string second=strs[n-1];
        for(int i=0;i<first.size();i++){
            if(first[i]==second[i]){
                ans+=first[i];
            }
            else{
                break;
            }
        }
        return ans;
        
    }
};