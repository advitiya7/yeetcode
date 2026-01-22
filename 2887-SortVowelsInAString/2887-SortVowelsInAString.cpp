// Last updated: 1/22/2026, 7:51:38 PM
class Solution {
public:
    string sortVowels(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                ans+=s[i];
                s[i]='0';
        } 
    }
    sort(ans.begin(),ans.end());
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            s[i]=ans[j];
            j++;
        }
    }
    return s;
    }

};