// Last updated: 1/22/2026, 7:54:11 PM
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                cnt++;
                if(cnt==3){
                    return true;
                }
            }
            else{
                cnt=0;
            }
        }
        return false;
        
    }
};