// Last updated: 1/22/2026, 7:54:35 PM
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
void f(int &res,int maxNode,int minNode,TreeNode*root){
    if(root==NULL){
        return;
    }
    maxNode=max(maxNode,root->val);
    minNode=min(minNode,root->val);
    res=max({res,abs(maxNode-root->val),abs(minNode-root->val)});
    f(res,maxNode,minNode,root->left);
    f(res,maxNode,minNode,root->right);


}
    int maxAncestorDiff(TreeNode* root) {
        int res=0;
        int maxNode=INT_MIN;
        int minNode=INT_MAX;

        f(res,maxNode,minNode,root);
        return res;
        
    }
};