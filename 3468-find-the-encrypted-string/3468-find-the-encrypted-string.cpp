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