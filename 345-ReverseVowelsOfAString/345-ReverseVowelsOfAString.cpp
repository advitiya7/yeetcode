// Last updated: 1/22/2026, 7:56:05 PM
class Solution {
public:
    string reverseVowels(string s) {
        set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (st.contains(s[i]) && st.contains(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            if (!st.contains(s[i])) {
                i++;
            }
            if (!st.contains(s[j])) {
                j--;
            }
        }
    
    return s;
}
};