// Last updated: 1/22/2026, 7:54:59 PM
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
int depth(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    return 1+max(depth(root->left),depth(root->right));
}
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
          if(root==NULL){
            return 0;
        }
        int leftdepth=depth(root->left);
        int rightdepth=depth(root->right);
        if(leftdepth==rightdepth){
            return root;
        }
        else if(leftdepth>rightdepth){
            return subtreeWithAllDeepest(root->left);
        }
        else{
            return subtreeWithAllDeepest(root->right);
        }
    }
};