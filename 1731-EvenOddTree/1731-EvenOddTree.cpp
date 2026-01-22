// Last updated: 1/22/2026, 7:53:15 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        bool c_even=true;
        while(!q.empty()){
            int n=q.size();
            int prev = c_even ? INT_MIN : INT_MAX; // Initialize prev based on even/odd level
            while(n--){
                TreeNode* node=q.front();
                q.pop();
                if(c_even&&(node->val<=prev || node->val%2==0)){
                    return false;
                }
                if(!c_even&&(node->val>=prev ||node->val%2!=0)){
                    return false;
                }
                prev=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
            c_even=!c_even;
        }
        
        return true;
        
    }
};