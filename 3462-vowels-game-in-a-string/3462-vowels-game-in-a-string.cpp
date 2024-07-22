class Solution {
public:
    bool doesAliceWin(string s) {
        unordered_set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(st.contains(s[i])){
                cnt++;
            }
        }
      if(cnt==0){
        return false;
      }
      return true;
    }
};