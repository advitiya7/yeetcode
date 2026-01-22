// Last updated: 1/22/2026, 7:52:34 PM
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long n = nums.size();
        vector<long long> prefixSum;
        vector<long long> suffixSum;

        long long currentSum = 0;
        for(long long i = 0; i < n; i++){
            currentSum += nums[i];
            prefixSum.push_back(currentSum);
        }
        currentSum = prefixSum[n - 1];
        suffixSum.push_back(currentSum);
        for(long long i = 1; i < n; i++){
            currentSum -= nums[i - 1];
            suffixSum.push_back(currentSum);
        }

        long long index = 0;
        long long minDiff = INT_MAX;

        // Find index with minimum average difference
        for(long long i = 0; i < n - 1; i++){
            long long diff = abs(prefixSum[i] / (i + 1) - suffixSum[i + 1] / (n - i - 1));
            if(minDiff > diff){
                minDiff = diff;
                index = i;
            }
        }

        // Check if last index has minimum average difference
        if(minDiff > prefixSum[n - 1] / n){
            index = n - 1;
        }

        return index;
    }
};
