// Last updated: 1/22/2026, 7:51:19 PM
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int temp=INT_MAX;
        int cnt=0;
        string st="";
        vector<string>ans;
        for(int i=0;i<n;i++){
            string str="";
            for(int j=i;j<n;j++){
                str+=s[j];
                if(s[j]=='1'){
                    cnt++;
                }
                if(cnt==k){
                    ans.push_back(str);
                    int n1=str.size();
                    temp=min(temp,n1);
                }
            }
            cnt=0;
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i].size()==temp){
                st+=ans[i];
                break;
            }
        }
        return st;
        
    }
};