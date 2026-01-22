// Last updated: 1/22/2026, 7:50:36 PM
class Solution {
public:
    string compressedString(string word) {
        int n=word.size();
        string s="";
        for(int i=0;i<n;i++){
            int cnt=1;
            while(word[i]==word[i+1] && cnt<9){
                cnt++;
                i++;
            }
            s+=cnt+'0';
            s+=word[i];

        }
        return s;
        
    }
};