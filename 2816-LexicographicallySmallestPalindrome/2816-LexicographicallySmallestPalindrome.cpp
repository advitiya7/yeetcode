// Last updated: 1/22/2026, 7:51:50 PM
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(s[i]<s[j]){
                s[j--]=s[i++];
            }
            else{
                s[i++]=s[j--];
            }
        }
        return s;
     
    }
};