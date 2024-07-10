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
int result;
int cntNodes(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return 1+cntNodes(root->left)+cntNodes(root->right);
}
int nodeSum(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return root->val+nodeSum(root->left)+nodeSum(root->right);
}
void solve(TreeNode* root){
    if(root==NULL){
        return ;
    }
    int n=cntNodes(root);
    int sum=nodeSum(root);
    if((sum)/n==root->val){
        result++;
    }
    solve(root->left);
    solve(root->right);
}
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return result;
       
        
    }
};