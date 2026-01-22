// Last updated: 1/22/2026, 7:54:42 PM
class Solution {
public:
    int solve(TreeNode* root, int &moves) {
        if(root == NULL) {
            return 0;
        }
        
        int l = solve(root->left, moves);
        int r = solve(root->right, moves);
        
        int coins = (l + r + root->val) - 1;
        
        moves += abs(l) + abs(r);
        
        return coins;
    }

    int distributeCoins(TreeNode* root) {
        int moves = 0;
        if(!root->left && !root->right) {
            return 0;
        }
        solve(root, moves);
        
        return moves;
    }
};