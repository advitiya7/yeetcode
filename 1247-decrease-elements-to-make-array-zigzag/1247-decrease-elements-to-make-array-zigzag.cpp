class Solution {
public:
    
    int help1(vector<int> &A,int i){
    int ans = 0;
    if(A.size()<2) return 0;
    for(;i<A.size();i+=2){
        if(i==0) ans+=max(A[i]-A[i+1]+1,0);
        else if(i==A.size()-1) ans+= max(A[i]-A[i-1]+1,0);
        else ans+= max({A[i]-A[i+1]+1,0,A[i]-A[i-1]+1});
    }
    return ans;
}


int movesToMakeZigzag(vector<int>& nums) {
    return min(help1(nums,0),help1(nums,1));
}
};