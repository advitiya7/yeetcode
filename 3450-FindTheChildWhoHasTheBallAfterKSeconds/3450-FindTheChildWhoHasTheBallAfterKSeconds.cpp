// Last updated: 1/22/2026, 7:50:37 PM
class Solution {
public:
    int numberOfChild(int n, int k) {
        int N=2*n-2, x=k%N;
        return (x<n)?x:N-x;
    }
};
