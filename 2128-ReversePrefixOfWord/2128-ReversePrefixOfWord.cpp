// Last updated: 1/22/2026, 7:52:45 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int ind = -1;
        for (int i = 0; i < n; i++) {
            if (word[i] == ch) {
                ind = i;
                break;
            }
        }
        if (ind == -1) {
            return word;
        }
        int i = 0;
        int j = ind;
        while (i <=j) {
            swap(word[i], word[j]);
            i++;
            j--;
        }
        return word;
    }
};