// Last updated: 1/22/2026, 7:54:39 PM
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
   
    void f(TreeNode*root,string s, vector<string>&res){
        if(root==NULL){
            return;
        }
        s+=(char)(root->val+97);
        if(root->left==NULL && root->right==NULL){
            string st=s;
            reverse(st.begin(),st.end());
            res.push_back(st);
        }
      
        f(root->left,s,res);
        f(root->right,s,res);
      
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>res;
        string s="";
        f(root,s,res);
        sort(res.begin(),res.end());
        return res[0];


        
    }
};