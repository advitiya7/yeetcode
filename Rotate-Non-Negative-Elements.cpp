1class Solution {
2public:
3    vector<int> rotateElements(vector<int>& nums, int k) {
4        vector<int> v;
5        
6        for (int x : nums) {
7            if (x >= 0) {
8                v.push_back(x);
9            }
10        }
11        
12        if (v.empty()) return nums;
13        
14        k = k % v.size();
15        
16        std::rotate(v.begin(), v.begin() + k, v.end());
17        
18        int v_index = 0;
19        for (int i = 0; i < nums.size(); i++) {
20            if (nums[i] >= 0) {
21                nums[i] = v[v_index];
22                v_index++;
23            }
24        }
25        
26        return nums;
27    }
28};