// Last updated: 1/22/2026, 7:57:09 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t s=haystack.find(needle);
        if(s!=string::npos){
            return s;
        }
        return -1;
    }
};