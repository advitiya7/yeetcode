// Last updated: 1/22/2026, 7:50:21 PM
class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
    int n=s.size();
    int m=t.size();
    if(n%k!=0 || m%k!=0){
        return false;
    }
    map<string,int>mp1;
    map<string,int>mp2;
    int sub=(n/k);
    for(int i=0;i<n;i+=sub){
        string str=s.substr(i,sub);
        mp1[str]++;
    }
     for(int i=0;i<n;i+=sub){
        string str=t.substr(i,sub);
        mp2[str]++;
    }
    return mp1==mp2;

        
    }
};