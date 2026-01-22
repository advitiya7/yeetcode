// Last updated: 1/22/2026, 7:54:56 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int cnt=0;
        while(l<=r){
            int sum=people[l]+people[r];
            if(sum<=limit){
                cnt++;
                l++;
                r--;
            }
            else{
                cnt++;
                r--;
            }
            
        }
    return cnt;

    }
};