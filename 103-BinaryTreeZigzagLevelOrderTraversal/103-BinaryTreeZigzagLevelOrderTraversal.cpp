// Last updated: 1/22/2026, 7:56:46 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool ok = 0;
        while (!q.empty()) {
            int size = q.size();
            vector<int> res;
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                res.push_back(temp->val);
                if (temp->left != NULL) {
                    q.push(temp->left);
                }
                if (temp->right != NULL) {
                    q.push(temp->right);
                }
            }
            if (ok) {
                reverse(res.begin(), res.end());
                ok = !ok;
                ans.push_back(res);
            } else {
                ans.push_back(res);
                ok = !ok;
            }
        }
        return ans;
    }
};