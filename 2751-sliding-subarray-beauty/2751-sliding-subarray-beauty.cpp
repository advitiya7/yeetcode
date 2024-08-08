class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> mp;
        int i = 0;
        int j = 0;
        while (j < n) {
            mp[nums[j]]++;
            if (j - i + 1 == k) {
                int cnt = x;
                for (int k = -50; k <= -1; k++) {
                    cnt -= mp[k];
                    if (cnt <= 0) {
                        ans.push_back(k);
                        break;
                    }
                }
                if (cnt > 0)
                 ans.push_back(0);
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};