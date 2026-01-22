// Last updated: 1/22/2026, 7:51:58 PM
class Solution {
public:
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        long long ans = 0;
        int n = arr.size();
        k = __gcd(k, n);
        for (int i = 0; i < k; i++) {
            vector<int> v;
            for (int j = i; j < n; j += k) {
                v.push_back(arr[j]);
            }
            sort(v.begin(), v.end());
            int median = v[v.size() / 2];
            for (int j = i; j < n; j += k) {
                ans += abs(median - arr[j]);
            }
        }
        return ans;
    }
};