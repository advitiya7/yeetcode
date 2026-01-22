// Last updated: 1/22/2026, 7:57:14 PM
class Solution {
public:
vector<string>res;
void rec(int open,int close,int n,string s){
    if(s.size()==2*n){
        res.push_back(s);
        return;
    }
    if(open<n){
        rec(open+1,close,n,s+"(");
    }
    if(close<open){
        rec(open,close+1,n,s+")");
    }
}
    vector<string> generateParenthesis(int n) {
        string s="";
        rec(0,0,n,s);
        return res;
    }
};