// Last updated: 1/22/2026, 7:56:39 PM
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
int f(TreeNode* root,int ans){
    if(root==NULL){
        return 0;
    }
    ans=ans*10+root->val;
    if(root->right==NULL && root->left==NULL){
        return ans;
    }
    int l=f(root->left,ans);
    int r=f(root->right,ans);

    return l+r;
}
    int sumNumbers(TreeNode* root) {
        return f(root,0);

        
    }
};