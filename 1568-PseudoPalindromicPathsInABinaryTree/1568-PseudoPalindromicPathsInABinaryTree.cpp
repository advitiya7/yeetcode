// Last updated: 1/22/2026, 7:53:34 PM
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
void f(TreeNode* root,vector<int>freq,int cnt,int &ans){
    if(root==NULL){
        return;
}
freq[root->val]++;
if(root->left==NULL && root->right==NULL){
    for(int i=1;i<10;i++){
        if(freq[i]%2!=0){
            cnt++;
        }
    }
    if(cnt<=1){
        ans++;
    }
}
f(root->left,freq,cnt,ans);
f(root->right,freq,cnt,ans);
}
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>freq(10,0);
        int cnt=0;
        int ans=0;
        f(root,freq,cnt,ans);
        return ans;
        
    }
};