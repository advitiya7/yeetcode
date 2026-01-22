// Last updated: 1/22/2026, 7:56:09 PM
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
void solve(TreeNode*root,vector<string>&ans,string s){
    s+=(s.size()?"->":"")+to_string(root->val);
    if(root->left==NULL && root->right==NULL){
        ans.push_back(s);
    }
    if(root->left)solve(root->left,ans,s);
    if(root->right)solve(root->right,ans,s);
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s="";
        solve(root,ans,s);
        return ans;

        
    }
};