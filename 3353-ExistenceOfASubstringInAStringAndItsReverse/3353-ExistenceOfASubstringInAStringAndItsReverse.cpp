// Last updated: 1/22/2026, 7:50:49 PM
class Solution {
public:
    bool isSubstringPresent(string s) {
        int n=s.size();
        if(n==1){
            return false;
        }
        set<string>st;
        for(int i=0;i<n-1;i++){
            st.insert(s.substr(i,2));
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<n-1;i++){
            string t=s.substr(i,2);
            if(st.find(t)!=st.end()){
                return true;
            }
        }
        return false;
        
    }
};