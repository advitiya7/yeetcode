// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/

// 3 approaches

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
int diff;
void childDiff(TreeNode*root,TreeNode*child){
    if(root==NULL || child==NULL){
        return;
    }
    diff=max(diff,abs(root->val-child->val));
    childDiff(root,child->left);
    childDiff(root,child->right);
}
void rootDiff(TreeNode*root){
    if(root==NULL){
        return;
    }
    childDiff(root,root->left);
    childDiff(root,root->right);
    rootDiff(root->left);
    rootDiff(root->right);
}

    int maxAncestorDiff(TreeNode* root) {
        diff=-1;
        rootDiff(root);
        return diff;
        
    }
};

//2nd
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

//3rd
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
int f(int maxi,int mini,TreeNode*root){
    if(root==NULL){
        return (maxi-mini);
    }
    maxi=max(maxi,root->val);
    mini=min(mini,root->val);
    int left=f(maxi,mini,root->left);
    int right=f(maxi,mini,root->right);
    return max(left,right);
}
    int maxAncestorDiff(TreeNode* root) {
        int ans=f(root->val,root->val,root);
        return ans;

        
    }
};

