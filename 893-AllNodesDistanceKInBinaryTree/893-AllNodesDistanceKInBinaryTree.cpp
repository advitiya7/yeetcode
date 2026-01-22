// Last updated: 1/22/2026, 7:55:01 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> mp;
    void dfs(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        if (root->left != NULL) {
            mp[root->left] = root;
            dfs(root->left);
        }
        if (root->right != NULL) {
            mp[root->right] = root;
            dfs(root->right);
        }
    }
    void bfs(TreeNode* target, int k, vector<int>& ans) {
        queue<TreeNode*> q;
        q.push(target);
        set<int> vis;
        vis.insert(target->val);
        while (!q.empty()) {
            int n = q.size();
            if (k == 0) {
                break;
            }
            while (n--) {
                TreeNode* cur = q.front();
                q.pop();
                if (cur->left != NULL &&
                    vis.find(cur->left->val) == vis.end()) {
                    q.push(cur->left);
                    vis.insert(cur->left->val);
                }
                if (cur->right != NULL &&
                    vis.find(cur->right->val) == vis.end()) {
                    q.push(cur->right);
                    vis.insert(cur->right->val);
                }
                if (mp.find(cur) != NULL &&
                    vis.find(mp[cur]->val) == vis.end()) {
                    q.push(mp[cur]);
                    vis.insert(mp[cur]->val);
                }
            }
            k--;
        }
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            ans.push_back(temp->val);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        dfs(root);
        vector<int> ans;
        bfs(target,k,ans);
        return ans;
    }
};