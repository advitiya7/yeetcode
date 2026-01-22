// Last updated: 1/22/2026, 7:52:33 PM
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
int res;
pair<int,int>f(TreeNode* root){
    if(root==NULL){
        return {0,0};
    }
    auto lsum=f(root->left);
    auto rsum=f(root->right);
    int totsum=lsum.first+rsum.first+root->val;
    int totnodes=1+lsum.second+rsum.second;
    int val=(totsum/totnodes);
    if(val==root->val){
        res++;
    }
return {totsum,totnodes};
}
    int averageOfSubtree(TreeNode* root) {
        f(root);
        return res;
        
    }
};