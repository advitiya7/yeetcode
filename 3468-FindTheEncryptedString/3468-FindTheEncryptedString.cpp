// Last updated: 1/22/2026, 7:50:32 PM
class Solution {
public:
    string getEncryptedString(string s, int k) {
        string st;
        int n=s.size();
        for(int i=0;i<n;i++){
            st+=s[(i+k)%n];
        }
        return st;
        
    }
};