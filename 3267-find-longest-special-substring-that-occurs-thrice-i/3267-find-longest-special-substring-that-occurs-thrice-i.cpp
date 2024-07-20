class Solution {
private:
    bool special(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[i+1]) return false;
        i++;
    }
    return true;
}
public:
    int maximumLength(string s) {
    int i,j;
    map<string,int> count;
    for(i=0;i<s.length();i++){
        for(j=i;j<s.length();j++){
            if(special(s,i,j)){
                count[s.substr(i,j-i+1)]++;
            }
        }
    }
    int ans=0;
    for(auto i : count){
        string str=i.first;
        if(i.second>=3 && str.length()>ans) ans=str.length();
    }
        if(ans==0) return -1;
        return ans;
    }
};