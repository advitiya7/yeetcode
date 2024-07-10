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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int val=0;
        while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            val=temp->val;
            if(temp->right!=NULL){
                q.push(temp->right);
            }
             if(temp->left!=NULL){
                q.push(temp->left);
            }
        }
        return val;
    }
};