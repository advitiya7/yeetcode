class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int>st;
        int size=banned.size();
        for(int i=0;i<size;i++){
            st.insert(banned[i]);
        }
        int cnt=0;
        int ans=0;
        for(int i=1;i<=n;i++){
            if(st.find(i)!=st.end()){
                st.erase(i);
            }
            else{
                ans+=i;
                if(ans<=maxSum){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};