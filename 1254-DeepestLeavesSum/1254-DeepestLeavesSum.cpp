// Last updated: 1/22/2026, 7:54:13 PM
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
int height(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return 1+max(left,right);
}
void f(int &max_depth,TreeNode*root,int depth){
    if(root==NULL){
        return;
    }
    if(depth==max_depth && root->left==NULL && root->right==NULL){
        sum+=(root->val);
    }
    f(max_depth,root->left,depth+1);
    f(max_depth,root->right,depth+1);



}
    int deepestLeavesSum(TreeNode* root) {
        int max_depth=height(root);
        int depth=1;
        f(max_depth,root,depth);
       return sum;

        
    }
};