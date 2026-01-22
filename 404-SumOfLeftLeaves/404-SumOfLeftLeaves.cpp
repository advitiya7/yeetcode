// Last updated: 1/22/2026, 7:55:55 PM
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
  int sum=0;
void solve(TreeNode*root,bool ok){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL && ok){
        sum+=root->val;
    }
    solve(root->left,true);
    solve(root->right,false);

}
    int sumOfLeftLeaves(TreeNode* root) {
      
        solve(root,false);
        return sum;

        
    }
};