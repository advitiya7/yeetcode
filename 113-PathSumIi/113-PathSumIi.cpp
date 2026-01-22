// Last updated: 1/22/2026, 7:56:42 PM
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
void f(TreeNode* root,int sum,vector<int>ans,vector<vector<int>>&res){
    if(root==NULL){
        return ;
    }
    ans.push_back(root->val);
    if(root->left==NULL && root->right==NULL && sum==root->val){
        res.push_back(ans);
    }
    f(root->left,sum-root->val,ans,res);
    f(root->right,sum-root->val,ans,res);
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ans;
        vector<vector<int>>res;
        f(root,targetSum,ans,res);
        return res;
        
    }
};