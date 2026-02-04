1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> ans;
5        stack<int> st;
6        int n = nums2.size();
7        for (int i = n - 1; i >= 0; i--) {
8            if (st.size() == 0) {
9                ans.push_back(-1);
10            } else if (st.size() > 0 && nums2[i] < st.top()) {
11                ans.push_back(st.top());
12            } else if (st.size() > 0 && nums2[i] >= st.top()) {
13                while (st.size() > 0 && nums2[i] >= st.top()) {
14                    st.pop();
15                }
16                if (st.size() == 0) {
17                    ans.push_back(-1);
18                } else {
19                    ans.push_back(st.top());
20                }
21            }
22            st.push(nums2[i]);
23        }
24        reverse(ans.begin(), ans.end());
25        map<int, int> mp;
26        for (int i = 0; i < n; i++) {
27            mp[nums2[i]] = ans[i];
28        }
29        vector<int> res;
30        for (int i = 0; i < nums1.size(); i++) {
31            if (mp.find(nums1[i]) != mp.end()) {
32                res.push_back(mp[nums1[i]]);
33            }
34        }
35        return res;
36    }
37};