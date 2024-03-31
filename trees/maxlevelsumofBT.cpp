// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/
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
    int maxLevelSum(TreeNode* root) {
        int ans;
        int maxi=INT_MIN;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        int depth=1;
        while(!q.empty()){
            int sum=0;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode*temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            if(sum>maxi){
                ans=depth;
                maxi=max(sum,maxi);
            }
            depth++;
        }
        return ans;
        
    }
};