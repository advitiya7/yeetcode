class Solution {
public:
int maxi=INT_MIN;
bool check(string &s){
    set<char>st;
    for(auto it:s){
        st.insert(it);
    }
    return st.size()==s.size();
}
int solve(int i,vector<string>& arr,int n,string temp){
   
    if(check(temp)==false){
        return 0;
    }
    if(i>=n){
        int size=temp.size();
        maxi=max(size,maxi);
        return maxi;
    }
int take=solve(i+1,arr,n,temp+arr[i]);
int notake=solve(i+1,arr,n,temp);
return maxi;
}
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        return solve(0,arr,n,"");
        // return maxi;
        
    }
};