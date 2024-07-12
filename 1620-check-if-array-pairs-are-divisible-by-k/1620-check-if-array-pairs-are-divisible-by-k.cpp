class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>cnt(k,0);
        for(int i=0;i<n;i++){
            int rem=((arr[i]%k)+k)%k;// this is done as there arenegative numbers in the array
            cnt[rem]++;
        }
        for(int i=0;i<k;i++){
            if(i==0){
                if(cnt[0]%2!=0){
                    return false;
                }
            }
            else if(cnt[i]!=cnt[k-i]){
                return false;
            }
        }
        return true;
        
    }
};